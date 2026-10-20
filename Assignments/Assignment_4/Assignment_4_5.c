////////////////////////////////////////////////////////////////////////////////
//
//  5. Check Divisibility by 5
//
//  Problem Statement : Accept an integer from the user and determine
//                      whether it is divisible by 5 without leaving
//                      any remainder.
//
//  Function Name    : CheckDivisibility
//  Input            : Integer
//  Output           : Divisible by 5 or Not Divisible by 5
//  Description      : Checks whether the given integer is completely
//                     divisible by 5.
//
//  Date             : 20/10/2026
//  Author           : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDivisibility
//  Input         : Integer
//  Output        : Prints whether the number is divisible by 5
//
////////////////////////////////////////////////////////////////////////////////

void CheckDivisibility(int iValue)
{
    if (iValue % 5 == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iValue = 0;

    printf("Enter a Number:\n");

    if (scanf("%d", &iValue) != 1)
    {
        printf("Invalid Input\n");
        return EXIT_FAILURE;
    }

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 45
//  Output : Divisible by 5
//
//  Test Case 2:
//  Input  : 16
//  Output : Not Divisible by 5
//
//  Test Case 3:
//  Input  : -10
//  Output : Divisible by 5
//
////////////////////////////////////////////////////////////////////////////////