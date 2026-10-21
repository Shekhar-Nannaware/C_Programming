
////////////////////////////////////////////////////////////////////////////////
//
//  Check Student Grade
//
//  Problem Statement : Accept the marks of a student out of 100 and display
//                      the grade according to the following criteria.
//                      Marks outside the range 0-100 are invalid.
//
//  Marks            | Grade
//  -----------------|-------
//  90 - 100         | A
//  75 - 89          | B
//  60 - 74          | C
//  40 - 59          | D
//  Below 40         | Fail
//
//  Function Name    : DisplayGrade
//  Input            : Marks
//  Output           : Displays the student's grade
//  Description      : Determines the grade based on the given marks.
//
//  Date             : 21/10/2026
//  Author           : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayGrade
//  Input         : Float / Marks
//  Output        : Prints the grade or invalid marks message
//  Description   : Checks marks and displays the corresponding grade.
//
////////////////////////////////////////////////////////////////////////////////

void DisplayGrade(int gMarks)
{
    if(gMarks > 100 || gMarks < 0)
    {
        printf("Invalid Marks \n");
    }
    else if( gMarks >= 90 )
    {
        printf("Grade : A \n");
    }
    else if( gMarks >= 75 )
    {
        printf("Grade : B \n");
    }
    else if( gMarks >= 60 )
    {
        printf("Grade : C \n");
    }
    else if( gMarks >= 40 )
    {
        printf("Grade : D \n");
    }
    else
    {
        printf("Fail \n");
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks : \n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : 85
//  Output : Grade : B
//
//  Test Case 2:
//  Input  : 35
//  Output : Fail
//
//  Test Case 3:
//  Input  : 105
//  Output : Invalid Marks
//
////////////////////////////////////////////////////////////////////////////////
