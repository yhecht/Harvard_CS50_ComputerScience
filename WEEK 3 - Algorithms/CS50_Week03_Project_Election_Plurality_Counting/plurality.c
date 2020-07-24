// HARVARD CS50 Week 3 - Plurality (Vote & Election Tool) - Implement a program that runs a plurality election
#include <cs50.h>
#include <stdio.h>
#include <string.h>


// PSEUDO CODE: VOTE FUNCTION
// 1. Iterate through candidates
// 2. Check for candidate name match in string name
// 3. If match, add 1 to counter
// 4. If works, print total number of votes
// 5. Else, return false and stop

// PSEUDO CODE: PRINT_WINNER FUNCTION
// 1. Define max_votes (int) and set to 0
// 2. Iterate through candidates and check total number of votes
// 3. If total number of votes > max_votes, change max_votes to total number of votes
// 4. Iterate through candidates, print each candidate with max_votes


// Define constant MAX equal to 9 (Max number of candidates)
#define MAX 9

// Candidates have name and vote count

// Define new data structure
typedef struct
{
    string name;
    int votes;
}
candidate;

// Define a global array of candidates, where each element is a candidate
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage (refers to command line entry) and print instructions
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates, prompt user to enter number between 1-9
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }
    // Ask user to enter number of voters
    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}

// Print the winner/s (or winners) of the election
void print_winner(void)
{
    int max_votes = 0;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > max_votes)
        {
            max_votes = candidates[i].votes;
        }
    }
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == max_votes)
        {
            printf("%s\n", candidates[i].name);
        }
    }

    return;
}