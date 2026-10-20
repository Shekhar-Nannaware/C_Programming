
///////////////////////////////////////////////////
//
//  2. Program to Print 5 Times "Marvellous" on Screen
//
//  Function Name   :   Display
//  Input           :   None
//  Output          :   None
//  Description     :   Prints "Marvellous" 5 times on screen
//  Author          :   Shekhar Nannaware
//
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Prints "Marvellous" 5 times
//
///////////////////////////////////////////////////

void Display()
{
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
        printf("Marvellous\n");
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
//      Display()           Marvellous (5 times)
//-------------------------------------------------
///////////////////////////////////////////////////
