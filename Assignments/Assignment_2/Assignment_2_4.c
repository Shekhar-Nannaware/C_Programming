
///////////////////////////////////////////////////
//
//  4. Accept two Numbers from user and display
//     first number second number of times.
//
//  Function Name   :   Display
//  Input           :   Integer, Integer
//  Output          :   None
//  Description     :   Displays the first number
//                      the given frequency of times
//  Date            :   20/10/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Displays a number repeatedly
//
///////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    // Updater
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    if(iFrequency <= 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
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
    int iCount = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    printf("Enter Frequency : \n");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input Number    Frequency    Output
//-------------------------------------------------
//      5               3            5  5  5
//     -5               3            5  5  5
//      5              -3            5  5  5
//     -5              -3            5  5  5
//      7               0            (No output)
//-------------------------------------------------
///////////////////////////////////////////////////
