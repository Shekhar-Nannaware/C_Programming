////////////////////////////////////////////////////////////////////////////////
//
//  1. Check Whether Number is Positive, Negative, or Zero
//
//  Problem Statement : Write a C program that accepts an integer from the
//                      user and determines whether the entered number is
//                      positive, negative, or zero.
//
//  Function Name    : CheckNumber
//  Input            : Integer
//  Output           : Positive Number, Negative Number, or Zero
//  Description      : Checks whether the given integer is positive,
//                     negative, or zero.
//
//  Date             : 20/10/2026
//  Author           : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumber
//  Input         : Integer
//  Output        : Prints whether the number is positive, negative, or zero
//
////////////////////////////////////////////////////////////////////////////////

void CheckNumber(int iValue)
{
    if (iValue > 0)
    {
        printf("%d Positive Number\n", iValue);
    }
    else if (iValue == 0)
    {
        printf("%d Zero\n", iValue);
    }
    else
    {
        printf("%d Negative Number\n", iValue);
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

    printf("Enter A Number:\n");

    if (scanf("%d", &iValue) != 1)
    {
        printf("Invalid Input\n");
        return EXIT_FAILURE;
    }

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 15
//  Output : 15 Positive Number
//
//  Test Case 2:
//  Input  : -8
//  Output : -8 Negative Number
//
//  Test Case 3:
//  Input  : 0
//  Output : 0 Zero
//
////////////////////////////////////////////////////////////////////////////////