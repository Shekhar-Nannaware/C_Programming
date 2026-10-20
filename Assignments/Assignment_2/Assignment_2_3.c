
///////////////////////////////////////////////////
//
//  3. Accept one Number from user. If Number is
//     less than 10 then print "Hello" otherwise
//     print "Demo".
//
//  Function Name   :   Display
//  Input           :   Integer
//  Output          :   None
//  Description     :   Prints "Hello" if number is
//                      less than 10, otherwise "Demo"
//  Date            :   20/10/2026
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Checks number and prints message
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
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
//      5           Hello
//      9           Hello
//      10          Demo
//      15          Demo
//     -3           Hello
//-------------------------------------------------
///////////////////////////////////////////////////
