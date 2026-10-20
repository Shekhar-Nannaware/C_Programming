
///////////////////////////////////////////////////
//
//  5. Accept Number From User and Check Whether
//     Number is even or odd.
//
//  Function Name   :   CheckEven
//  Input           :   Integer
//  Output          :   BOOL
//  Description     :   Checks whether a number is
//                      even or odd
//  Date            :   20/10/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Define TRUE and FALSE
//
///////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////
//
//  Function Name   :   CheckEven
//  Description     :   Checks whether number is even
//
///////////////////////////////////////////////////

BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Input       Output
//-------------------------------------------------
//      10          Number is even
//      7           Number is odd
//      0           Number is even
//     -4           Number is even
//     -3           Number is odd
//-------------------------------------------------
///////////////////////////////////////////////////
