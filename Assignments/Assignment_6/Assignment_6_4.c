
////////////////////////////////////////////////////////////////////////////////
//
//  4. Check Triangle Validity
//
//  Problem Statement : Accept three integers representing the lengths of
//                      the sides of a triangle and determine whether they
//                      form a valid triangle.
//
//                      All sides must be positive, and the sum of any two
//                      sides must be greater than the third side.
//
//  Author : Shekhar Nannaware
//  Date   : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckTriangle
//  Input         : Three integer values
//  Output        : Valid Triangle or Invalid Triangle
//  Description   : Checks whether three sides form a valid triangle.
//
////////////////////////////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if ( (iSide1 > 0) && (iSide2 > 0) && (iSide3 > 0) &&

         (iSide1 + iSide2 > iSide3) &&
         (iSide1 + iSide3 > iSide2) &&
         (iSide2 + iSide3 > iSide1)
       )
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter Three Sides: \n");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 3 4 5
//  Output : Valid Triangle
//
//  Input  : 1 2 3
//  Output : Invalid Triangle
//
//  Input  : 0 4 5
//  Output : Invalid Triangle
//
////////////////////////////////////////////////////////////////////////////////
