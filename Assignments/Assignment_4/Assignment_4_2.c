////////////////////////////////////////////////////////////////////////////////
//
//  2. Check Even or Odd Number
//
//  Problem Statement : Accept an integer from the user and determine whether
//                      it is even or odd. An even number is completely
//                      divisible by 2.
//
//  Function Name    : CheckEvenOdd
//  Input            : Integer
//  Output           : Even Number or Odd Number
//  Description      : Checks whether the given integer is even or odd.
//
//  Date             : 20/10/2026
//  Author           : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Input         : Integer
//  Output        : Prints whether the number is even or odd
//
////////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iValue)
{
    if ((iValue % 2) == 0)
    {
        printf("%d Even Number\n", iValue);
    }
    else
    {
        printf("%d Odd Number\n", iValue);
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

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 24
//  Output : 24 Even Number
//
//  Test Case 2:
//  Input  : 17
//  Output : 17 Odd Number
//
//  Test Case 3:
//  Input  : -8
//  Output : -8 Even Number
//
////////////////////////////////////////////////////////////////////////////////