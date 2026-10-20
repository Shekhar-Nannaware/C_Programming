
///////////////////////////////////////////////////
//
//  4. Accept one Number and Check Whether is
//     Divisible by 5 or not.
//
//  Function Name   :   Check
//  Input           :   Integer
//  Output          :   BOOL
//  Description     :   Checks whether a number is
//                      divisible by 5 or not
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Define BOOL, TRUE and FALSE
//
///////////////////////////////////////////////////

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////
//
//  Function Name   :   Check
//  Description     :   Checks divisibility by 5
//
///////////////////////////////////////////////////

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
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

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
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
//      25          Divisible by 5
//      10          Divisible by 5
//      12          Not Divisible by 5
//      7           Not Divisible by 5
//      0           Divisible by 5
//      -15         Divisible by 5
//-------------------------------------------------
///////////////////////////////////////////////////
