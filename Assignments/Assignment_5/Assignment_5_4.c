
////////////////////////////////////////////////////////////////////////////////
//
//  Check Divisibility by 3 and 5
//
//  Problem Statement : Accept an integer and determine whether it is
//                      divisible by both 3 and 5, only by 3, only by 5,
//                      or by neither.
//
//  Function Name    : CheckMultipleDivisibility
//  Input            : Integer
//  Output           : Divisible by both, divisible by 3 only,
//                     divisible by 5 only, or not divisible by either
//  Description      : Checks whether the given integer is divisible
//                     by 3, 5, both, or neither.
//
//  Date             : 21/10/2026
//  Author           : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckMultipleDivisibility
//  Input         : Integer
//  Output        : Displays the divisibility result
//  Description   : Checks divisibility by 3 and 5.
//
////////////////////////////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iValue)
{
    if (((iValue % 3) == 0) && ((iValue % 5) == 0))
    {
        printf("divisible by both \n");
    }
    else if ((iValue % 5) == 0)
    {
        printf("divisible by 5 only \n");
    }
    else if ((iValue % 3) == 0)
    {
        printf("divisible by 3 only \n");
    }
    else
    {
        printf("Not divisible by Either \n");
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

    printf("Enter number : \n");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 15
//  Output : divisible by both
//
//  Test Case 2:
//  Input  : 9
//  Output : divisible by 3 only
//
//  Test Case 3:
//  Input  : 10
//  Output : divisible by 5 only
//
//  Test Case 4:
//  Input  : 7
//  Output : Not divisible by Either
//
////////////////////////////////////////////////////////////////////////////////
