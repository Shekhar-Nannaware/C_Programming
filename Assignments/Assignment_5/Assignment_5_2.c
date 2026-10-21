
////////////////////////////////////////////////////////////////////////////////
//
//  Check Leap Year
//
//  Problem Statement : Accept a year and determine whether it is a leap year
//                      according to the Gregorian Calendar rules. A year is
//                      a leap year if it is divisible by 400, or divisible
//                      by 4 but not by 100. Years less than or equal to
//                      zero are considered invalid.
//
//  Function Name    : CheckLeapYear
//  Input            : Integer
//  Output           : Leap Year or Not a Leap Year
//  Description      : Checks whether the given year is a leap year.
//
//  Date             : 21/10/2026
//  Author           : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Input         : Integer
//  Output        : Prints whether the year is a leap year
//  Description   : Checks the given year using Gregorian Calendar rules.
//
////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("%d it is a leap year \n", iYear);
    }
    else if ((iYear % 4 == 0 && iYear % 100 != 0) || iYear % 400 == 0)
    {
        printf("%d Leap Year\n", iYear);
    }
    else
    {
        printf("%d it is a NOT leap year \n", iYear);
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iYear = 0;

    printf("Enter year \n");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 2024
//  Output : 2024 Leap Year
//
//  Test Case 2:
//  Input  : 1900
//  Output : 1900 it is a NOT leap year
//
//  Test Case 3:
//  Input  : 2000
//  Output : 2000 Leap Year
//
////////////////////////////////////////////////////////////////////////////////
