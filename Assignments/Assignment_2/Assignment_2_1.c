
///////////////////////////////////////////////////
//
//  1. Accept one Number from user and print that
//     number of * on Screen.
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   None
//  Description     :   Prints the given number of *
//                      on the screen
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Prints the given number of stars
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    // Updater
    while(iCnt < iNo)
    {
        printf(" *");
        iCnt++;
    }

    printf("\n");
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      5           * * * * *
//      3           * * *
//      1           *
//      0           (No stars printed)
//     -5           (No stars printed)
//-------------------------------------------------
///////////////////////////////////////////////////
