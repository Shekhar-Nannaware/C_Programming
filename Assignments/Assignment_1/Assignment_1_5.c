
///////////////////////////////////////////////////
//
//  5. Accept one Number from user and print that
//     number of * on Screen.
//
//  Function Name   :   Accept
//  Input           :   Integer
//  Output          :   None
//  Description     :   Prints the given number of
//                      stars on the screen
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Accept
//  Description     :   Prints the given number of stars
//
///////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    iValue = 5;

    Accept(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      5           *****
//      3           ***
//      7           *******
//      1           *
//      0           (No output)
//-------------------------------------------------
///////////////////////////////////////////////////
