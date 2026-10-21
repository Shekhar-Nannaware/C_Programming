////////////////////////////////////////////////////////////////////////////////
//
//  3. Calculate Shopping Discount
//
//  Problem Statement :
//  Accept the total purchase amount and calculate the final payable amount
//  after applying the following discount. Negative purchase amounts
//  are invalid.
//
//  ------------------------------------------------------
//  | Purchase Amount           | Discount               |
//  ------------------------------------------------------
//  | Below Rs. 1000            | 0%                     |
//  ------------------------------------------------------
//  | Rs. 1000 to below Rs.5000 | 10%                    |
//  ------------------------------------------------------
//  | Rs. 5000 and above        | 20%                    |
//  ------------------------------------------------------
//
//  Input  : Purchase Amount
//  Output : Final Payable Amount
//
//  Author : Shekhar Nannaware
//  Date   : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateDiscount
//  Input         : float
//  Output        : Displays final payable amount
//  Description   : Calculates discount based on purchase amount
//
////////////////////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Input\n");
    }
    else if (fAmount < 1000)
    {
        fFinalAmount = fAmount;

        printf("Payable Amount : %.2f\n", fFinalAmount);
    }
    else if (fAmount < 5000)
    {
        fDiscount = (fAmount * 10) / 100;
        fFinalAmount = fAmount - fDiscount;

        printf("Payable Amount : %.2f\n", fFinalAmount);
    }
    else
    {
        fDiscount = (fAmount * 20) / 100;
        fFinalAmount = fAmount - fDiscount;

        printf("Payable Amount : %.2f\n", fFinalAmount);
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fAmount = 0.0f;

    printf("Enter Purchase Amount:\n");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 800
//  Output : Payable Amount : 800.00
//
//  Input  : 2000
//  Output : Payable Amount : 1800.00
//
//  Input  : 6000
//  Output : Payable Amount : 4800.00
//
//  Input  : -500
//  Output : Invalid Input
//
////////////////////////////////////////////////////////////////////////////////
