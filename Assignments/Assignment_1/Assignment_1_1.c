///////////////////////////////////////////////////
//
//  1. Program to Divide two Numbers
//
//  Function Name   :   Divide
//  Input           :   Integer, Integer
//  Output          :   Integer
//  Description     :   Performs division of two numbers
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Divide
//  Description     :   Performs division
//
///////////////////////////////////////////////////

int Divide(
                int iNo1,   // First input
                int iNo2    // Second input
            )
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;     // Business Logic

    return iAns;
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5, iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is %d\n", iRet);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input1      Input2      Output
//-------------------------------------------------
//      15          5           3
//      20          4           5
//      10          2           5
//      20         -5          -4
//     -20          5          -4
//      0           5           0
//      10          0          -1
//-------------------------------------------------
///////////////////////////////////////////////////
