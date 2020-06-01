// HARVARD CS50 - WEEK 02: Encryption (Caesar) - Implement a program that encrypts messages using user input cipher key
// Yannique Hecht

// Construct pseudo code
// 1.  Check that program was run with one command-line argument
// 2.  Iterate over the provided argument to make sure all characters are digits
// 3.  Convert that command-line argument from a string to an int
// 4.  Prompt user for plaintext
// 5.  Iterate over each character of the plaintext:
// 5.1 If it is an uppercase letter, rotate it, preserving case, then print out the rotated character
// 5.2 If it is a lowercase letter, rotate it, preserving case, then print out the rotated character
// 5.3 If it is neither, print out the character as is
// 6.  Print a newline


// Include libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Declare main function
int main(int argc, string argv[])
{

// Check for if commen comes in 1 line, else return further instruction
    if (argc != 2)
    {
        printf("Usage: ./casesar key \n");
        return 1;
    }
    int n = strlen(argv[1]);

// Check if argv is a digit
    for (int i = 0; i < n; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage:./caesar key\n");
            return 1;
        }
    }

// Convert argv into an integer
    int key = atoi(argv[1]);

// Divide so key is single transfer through alpha. Formula: ci = (pi +k) /26)
    if (key >= 26)
    {
        key = key % 26;
    }

// Prompt user to type plaintext
    string plaintext = get_string("plaintext: ");
    int x = strlen(plaintext);
    printf("ciphertext: ");
    for (int i = 0; i < x; i++)
    {

// Check if char < alpha
        if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
        {

// Add user key to ASCII number
            int ciphertext = plaintext[i] + key;
            if (ciphertext > 122)
            {

// Wrap cipher around if (cipher + key) > z
                ciphertext = ciphertext - 26;
            }
            printf("%c", ciphertext);
        }

        else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
        {
            int ciphertext = plaintext[i] + key;
            if (ciphertext > 90)
            {
                ciphertext -= 26;
            }
            printf("%c", ciphertext);
        }

// Keep all other charcaters unchanged
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");

// Print ciphertext
    return 0;
}