
////////////////////////////////////////////////////////////////////////////////
//
//  Identify Character Type
//
//  Problem Statement : Accept a single character and determine whether it is
//                      an uppercase alphabet, lowercase alphabet, digit,
//                      or special character. Use character comparisons
//                      without using library character-classification
//                      functions.
//
//  Function Name    : CheckCharacterType
//  Input            : Character
//  Output           : Uppercase Alphabet, Lowercase Alphabet, Digit,
//                     or Special Character
//  Description      : Identifies the type of the given character.
//
//  Date             : 21/10/2026
//  Author           : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckCharacterType
//  Input         : Character
//  Output        : Displays the character type
//  Description   : Checks the character using character comparisons.
//
////////////////////////////////////////////////////////////////////////////////

void CheckCharacterType(char cValue)
{
    if ((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digits \n");
    }
    else if ((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet \n");
    }
    else if ((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet \n");
    }
    else
    {
        printf("Special Character \n");
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main(void)
{
    char cValue = '\0';

    printf("Enter Character : \n");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : A
//  Output : Uppercase Alphabet
//
//  Test Case 2:
//  Input  : m
//  Output : Lowercase Alphabet
//
//  Test Case 3:
//  Input  : 7
//  Output : Digits
//
//  Test Case 4:
//  Input  : @
//  Output : Special Character
//
////////////////////////////////////////////////////////////////////////////////
