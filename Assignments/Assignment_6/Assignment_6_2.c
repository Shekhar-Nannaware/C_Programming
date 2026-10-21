////////////////////////////////////////////////////////////////////////////////
//
//  Program : Check Admission Eligibility
//
//  Problem Statement :
//  A student is eligible for admission if the student's marks are at least
//  60 and age is at least 17 years. Accept both values and determine
//  eligibility. Negative age or marks outside 0-100 must be treated
//  as invalid input.
//
//  Input  : Marks and Age
//  Output : Admission Eligibility Status
//
//  Author : Shekhar Nannaware
//  Date   : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckAdmission
//  Input         : float, int
//  Output        : Displays admission eligibility
//  Description   : Checks input validity and admission eligibility
//
////////////////////////////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{
    if ( ((fMarks >= 0) && (fMarks <= 100)) && (iAge >= 0) )
    {
        if ((fMarks >= 60) && (iAge >= 17))
        {
            printf("Eligible for Admission\n");
        }
        else
        {
            printf("Not Eligible for Admission\n");
        }
    }
    else
    {
        printf("Invalid Input\n");
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter Marks and Age:\n");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}


////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 75 18
//  Output : Eligible for Admission
//
//  Input  : 55 19
//  Output : Not Eligible for Admission
//
//  Input  : 80 16
//  Output : Not Eligible for Admission
//
//  Input  : 105 18
//  Output : Invalid Input
//
////////////////////////////////////////////////////////////////////////////////

