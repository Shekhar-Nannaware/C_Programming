
///////////////////////////////////////////////////
//
//  3. Program to Print 5 to 1 Numbers on Screen
//
//  Function Name   :   Display
//  Input           :   None
//  Output          :   None
//  Description     :   Prints numbers from 5 to 1
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Displays numbers from 5 to 1
//
///////////////////////////////////////////////////

void Display()
{
    int i = 0;

    i = 5;

    while(i >= 1)
    {
        printf("%d \n", i);
        i--;
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    Display();

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//     Step 5 :    Test the program
//
//      Tested test cases
//-------------------------------------------------
//      Function Call       Output
//-------------------------------------------------
//      Display()           5
//                          4
//                          3
//                          2
//                          1
//-------------------------------------------------
///////////////////////////////////////////////////
