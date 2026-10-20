
///////////////////////////////////////////////////
//
//  2. Accept one Number from user and print that
//     number of * on Screen.
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   None
//  Description     :   Prints the given number of *
//                      on the screen
//  Date            :   20/10/2026
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
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > iCnt)
    {
        printf(" *");
        iNo--;
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
//     -4           * * * *
//-------------------------------------------------
///////////////////////////////////////////////////
