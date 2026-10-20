////////////////////////////////////////////////////////////////////////////////
//
//  3. Find the Greater of Two Numbers
//
//  Problem Statement : Accept two integers from the user and determine
//                      which number is greater. If both numbers are equal,
//                      display an appropriate message.
//
//  Function Name    : FindGreater
//  Input            : Two Integers
//  Output           : Greater Number or Both Numbers Are Equal
//  Description      : Compares two integers and displays the greater number.
//                     If both numbers are equal, displays an appropriate
//                     message.
//
//  Date             : 20/10/2026
//  Author           : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindGreater
//  Input         : Two Integers
//  Output        : Prints the greater number or an equality message
//
////////////////////////////////////////////////////////////////////////////////

void FindGreater(int iFirst, int iSecond)
{
    if (iFirst < iSecond)
    {
        printf("%d is Greater\n", iSecond);
    }
    else if (iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter First Number:\n");

    if (scanf("%d", &iValue1) != 1)
    {
        printf("Invalid Input\n");
        return EXIT_FAILURE;
    }

    printf("Enter Second Number:\n");

    if (scanf("%d", &iValue2) != 1)
    {
        printf("Invalid Input\n");
        return EXIT_FAILURE;
    }

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 10 20
//  Output : 20 is Greater
//
//  Test Case 2:
//  Input  : 50 30
//  Output : 50 is Greater
//
//  Test Case 3:
//  Input  : 15 15
//  Output : Both Numbers Are Equal
//
////////////////////////////////////////////////////////////////////////////////