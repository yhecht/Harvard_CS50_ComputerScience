// HARVARD CS50 Week 3 - Runoff - Implement a program that runs a runoff election (ranked-choice voting system)
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define constants (Max voters and candidates)
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// Define two-dimensional array (preferences[i][j] is jth preference for voter i)
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Define data structure candidates (withe name, vote count, eliminated status)
typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;

// Create array of candidates
candidate candidates[MAX_CANDIDATES];

// Define 2 global variables (number of voters and candidates)
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates. Check for invalid command line usage and return instructions
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes
    for (int i = 0; i < voter_count; i++)
    {

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            // Record vote, unless it's invalid
            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}


//PSEUDOCODE: (1) VOTE FUNCTION
// 1. Iterate through candidates
// 2. If name match with candidate, then add vote decision to respective position in array
// 3. Return true, else return false & instructions for use

// (1) Record preference if vote is valid
bool vote(int voter, int rank, string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            preferences[voter][rank] = i;
            return true;
        }
    }
    return false;
}


//PSEUDOCODE: (2) TABULATE FUNCTION
// 1. Iterate through voter count
// 2. Check in which rank
// 3. Check each vote in rank 1 whether eliminated
// 4. If eliminated, go to rank 2
// 5. Check candidate match
// 6. Add 1 vote
// 7. If not eliminated, add 1 vote for candidate from rank 1

// (2) Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    for (int i = 0; i < voter_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            if (candidates[preferences[i][j]].eliminated == false)
            {
                candidates[preferences[i][j]].votes++;
                break;
            }
        }
    }
    return;
}


//PSEUDOCODE: (3) PRINT_WINNER FUNCTION
// 1.  Divide voter_count by 2
// 2.  Iterate through candidates
// 3.  If x candidate's total votes > (voter_count/2), print candidate name
// 4.  Return true
// 5.  Else, return false

// (3) Print the winner of the election, if there is one
bool print_winner(void)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > (voter_count / 2))
        {
            printf("%s\n", candidates[i].name);
            return true;
        }
    }
    return false;
}


//PSEUDOCODE: (4) FIND_MIN FUNCTION
// 1. Define min vote variable == 1st candidate
// 2. Iterate through candidates
// 3. If y candidate's votes < x candidate's votes, update min vote
// 4. Else, continue
// 5. Return min vote

// (4) Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    int min_vote = voter_count;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].eliminated == true)
        {
            continue;
        }
        else if (candidates[i].votes < min_vote)
        {
            min_vote = candidates[i].votes;
        }
    }

    return min_vote;
}


//PSEUDOCODE: (5) IS_TIE FUNCTION
// 1. Iterate through candidates
// 2. Check for not eliminated candidates
// 3. If number of eliminated candidates -1 equal to number of candidates, return
// 4. If false, return false
// 5. Else, return, true

// (5) Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].eliminated == false)
        {
            if (candidates[i].votes != min)
            {

                return false;
            }
        }
    }


    return true;
}


//PSEUDOCODE: (6) ELIMINATE FUNCTION
// 1. Iterate through candidates
// 2. If candidate vote == min number of votes & if candidate not eliminated, then eliminate

// (6) Eliminate the candidate (or candidiates) in last place
void eliminate(int min)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == min)
        {
            candidates[i].eliminated = true;
        }
    }
    return;
}