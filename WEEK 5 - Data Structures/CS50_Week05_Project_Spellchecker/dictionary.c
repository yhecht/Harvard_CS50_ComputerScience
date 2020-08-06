// Yannique Hecht
// HARVARD CS50 Week 5 - Speller - Implement a program that fastly spell-checks files with a hash table

// Include libabries to ensure dictionary functions properly
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include "dictionary.h"

// Represent a node in a hash table
typedef struct node
{
    char word[LENGTH];
    struct node *next;
}
node;

// Number of buckets in hash table (originally = 1)
const unsigned int N = 26;

// Hash table
node *table[N];
int totalWords = 0;

// return true if word is in dictionary, else false
bool check(const char *word)
{
    node *cursor = table[hash(word)];

    // compare words case insensitive
    if (strcasecmp(cursor->word, word) == 0)
    {
        return true;
    }

    // keep traversing linked list until it finds the word or it finishes
    while (cursor->next != NULL)
    {
        cursor = cursor->next;
        if (strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
    }

    return false;
}

// Hashes word to a number
// Used one bucket for every letter, a = 0, b = 1 ... z = 25
unsigned int hash(const char *word)
{
    int n = (int) tolower(word[0]) - 97;
    return n;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // open dictionary and initializes temporary space to hold the words
    FILE *file = fopen(dictionary, "r");
    char *dictWord = malloc(LENGTH);
    if (dictWord == NULL)
    {
        return false;
    }

    // read file until the end
    while (fscanf(file, "%s", dictWord) != EOF)
    {
        // allocate memory for a node in which the word will be inserted
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return false;
        }

        // copies the word in the chunk of memory allocated and then updates the words count
        strcpy(n->word, dictWord);
        totalWords++;

        // set next to point at beginning of list
        n->next = table[hash(dictWord)];

        // point array at n which becomes new beginning of the list
        table[hash(dictWord)] = n;
    }

    fclose(file);
    free(dictWord);
    return true;
}

// Return number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return totalWords;
}

// Unload dictionary from memory, return true if successful, else false
bool unload(void)
{
    // create two pointers to traverse the linked list and cancel its element without losing its address
    node *tmp;
    node *cursor;

    // repeat for every index in the table
    for (int i = 0; i < N; i++)
    {
        if (table[i] == NULL)
        {
            continue;
        }

        cursor = table[i];
        tmp = cursor;

        // free allocated memory in load until the end of list
        while (cursor->next != NULL)
        {
            cursor = cursor->next;
            free(tmp);
            tmp = cursor;
        }
        free(cursor);
    }
    return true;
}