
////////////////////////////////////////////////////////////////////////////////
//
//  1. Write a program which accepts one number from the user and prints
//     that number of even numbers on the screen.
//
//  Function Name : printEven
//  Input         : Integer
//  Output        : Prints even numbers
//  Description   : This function prints the first N even numbers.
//
//  Date          : 20/10/2026
//  Author        : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : printEven
//  Input         : Integer
//  Output        : Prints even numbers
//  Description   : Prints the first N even numbers.
//
////////////////////////////////////////////////////////////////////////////////

void printEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }

    printf("\n");
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    printEven(iValue);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 5
//  Output : 2  4  6  8  10
//
//  Test Case 2:
//  Input  : 3
//  Output : 2  4  6
//
//  Test Case 3:
//  Input  : 0
//  Output : No output
//
////////////////////////////////////////////////////////////////////////////////
