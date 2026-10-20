////////////////////////////////////////////////////////////////////////////////
//
//  4. Check Voting Eligibility
//
//  Problem Statement : Accept the age of a person and determine whether
//                      the person is eligible to vote. A person must be
//                      at least 18 years old to vote. A negative age
//                      should be considered invalid.
//
//  Function Name    : CheckVotingEligibility
//  Input            : Age of a Person
//  Output           : Eligible for Voting, Not Eligible for Voting,
//                     or Invalid Age
//  Description      : Checks whether a person is eligible to vote based
//                     on their age.
//
//  Date             : 20/10/2026
//  Author           : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define ELIGIBLE 18
#define INVALID  0

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckVotingEligibility
//  Input         : Age of a Person
//  Output        : Prints the voting eligibility status
//
////////////////////////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iAge)
{
    if (iAge < INVALID)
    {
        printf("Invalid Age\n");
    }
    else if (iAge >= ELIGIBLE)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iAge = 0;

    printf("Enter Your Age:\n");

    if (scanf("%d", &iAge) != 1)
    {
        printf("Invalid Input\n");
        return EXIT_FAILURE;
    }

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 21
//  Output : Eligible for Voting
//
//  Test Case 2:
//  Input  : 16
//  Output : Not Eligible for Voting
//
//  Test Case 3:
//  Input  : -5
//  Output : Invalid Age
//
//  Test Case 4:
//  Input  : 0
//  Output : Not Eligible for Voting
//
////////////////////////////////////////////////////////////////////////////////