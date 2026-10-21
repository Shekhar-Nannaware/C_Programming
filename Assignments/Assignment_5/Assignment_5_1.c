
////////////////////////////////////////////////////////////////////////////////
//
//  5. Find The Greatest of Three Numbers
//
//  Problem Statement : Accept three integers and determine the greatest
//                      number among them. The program must also work
//                      correctly when two or all three numbers are equal.
//
//  Input  : Three integer values
//  Output : Greatest number
//
//  Author : Shekhar Nannaware
//  Date   : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindGreatest
//  Input         : Three integers
//  Output        : Displays the greatest number
//  Description   : Finds the greatest number among three integers.
//
////////////////////////////////////////////////////////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if ((iFirst >= iSecond) && (iFirst >= iThird))
    {
        printf("%d is Greatest\n", iFirst);
    }
    else if ((iSecond >= iFirst) && (iSecond >= iThird))
    {
        printf("%d is Greatest\n", iSecond);
    }
    else
    {
        printf("%d is Greatest\n", iThird);
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter Three Numbers : \n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 10 50 30
//  Output : 50 is Greatest
//
//  Input  : 40 40 20
//  Output : 40 is Greatest
//
//  Input  : 15 15 15
//  Output : 15 is Greatest
//
////////////////////////////////////////////////////////////////////////////////
