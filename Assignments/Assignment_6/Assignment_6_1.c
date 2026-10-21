
////////////////////////////////////////////////////////////////////////////////
//
//  1. Calculate Electricity Bill
//
//  Problem Statement : Accept the number of electricity units consumed
//                      and calculate the total bill using slab-wise rates.
//
//                      First 100 units : Rs. 5 per unit
//                      Next 100 units  : Rs. 7 per unit
//                      Above 200 units : Rs. 10 per unit
//
//                      Negative unit consumption is invalid.
//
//  Input  : Electricity units consumed
//  Output : Total electricity bill
//
//  Author : Shekhar Nannaware
//  Date   : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateElectricityBill
//  Input         : Integer
//  Output        : Displays total electricity bill
//  Description   : Calculates the bill using slab-wise rates.
//
////////////////////////////////////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits < 0)
    {
        printf("Invalid Input\n");
    }
    else if (iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill = %.2f\n", fBill);
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Bill = %.2f\n", fBill);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) +
                ((iUnits - 200) * 10);

        printf("Bill = %.2f\n", fBill);
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    int iUnits = 0;

    printf("Enter Consumed Units:\n");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 80
//  Output : Bill = 400.00
//
//  Input  : 150
//  Output : Bill = 850.00
//
//  Input  : 250
//  Output : Bill = 1700.00
//
//  Input  : -5
//  Output : Invalid Input
//
////////////////////////////////////////////////////////////////////////////////
