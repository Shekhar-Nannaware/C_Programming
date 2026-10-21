
////////////////////////////////////////////////////////////////////////////////
//
//  5. Calculate Employee Bonus
//
//  Problem Statement : Accept an employee's monthly salary and completed
//                      years of service. Calculate the bonus using these
//                      rules:
//
//                      More than 10 years : 15% bonus
//                      5 to 10 years      : 10% bonus
//                      Less than 5 years  : 5% bonus
//
//                      Salary must be positive and years of service
//                      cannot be negative.
//
//  Input  : Monthly salary and completed years of service
//  Output : Employee bonus or invalid input message
//
//  Author : Shekhar Nannaware
//  Date   : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CalculateBonus
//  Input         : float, int
//  Output        : Displays employee bonus
//  Description   : Calculates bonus based on years of service.
//
////////////////////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{
    // ERROR: fSalary < 0 does not reject a salary of zero.
    // Correct condition: fSalary <= 0

    if ((fSalary <= 0) || (iYears < 0))
    {
        printf("Invalid Input\n");
    }
    else if (iYears > 10)
    {
        fSalary = (fSalary / 100) * 15;
        printf("Bonus = %.2f\n", fSalary);
    }
    else if (iYears >= 5)
    {
        fSalary = (fSalary / 100) * 10;
        printf("Bonus = %.2f\n", fSalary);
    }
    else
    {
        fSalary = (fSalary / 100) * 5;
        printf("Bonus = %.2f\n", fSalary);
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//  Function Name : main
//  Description   : Accepts salary and years of service from the user.
//
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and Years of Service:\n");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 30000 12
//  Output : Bonus = 4500.00
//
//  Input  : 20000 7
//  Output : Bonus = 2000.00
//
//  Input  : 10000 2
//  Output : Bonus = 500.00
//
//  Input  : 40000 10
//  Output : Bonus = 4000.00
//
//  Input  : 0 5
//  Output : Invalid Input
//
////////////////////////////////////////////////////////////////////////////////
