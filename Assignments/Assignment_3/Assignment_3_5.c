
////////////////////////////////////////////////////////////////////////////////
//
//  5. Accept one character from the user and check whether that character
//     is a vowel (a, e, i, o, u) or not.
//
//  Function Name : CheckVowel
//  Input         : Character
//  Output        : TRUE or FALSE
//  Description   : Checks whether the given character is a vowel.
//
//  Date          : 20/10/2026
//  Author        : Shekhar Nannaware
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckVowel
//  Input         : Character
//  Output        : TRUE if vowel, otherwise FALSE
//
////////////////////////////////////////////////////////////////////////////////

BOOL CheckVowel(char ch)
{
    if((ch == 'a') || (ch == 'e') || (ch == 'i') ||
       (ch == 'o') || (ch == 'u') ||
       (ch == 'A') || (ch == 'E') || (ch == 'I') ||
       (ch == 'O') || (ch == 'U'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character:\n");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Vowel\n");
    }
    else
    {
        printf("It is Not a Vowel\n");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//
//  Test Case 1:
//  Input  : a
//  Output : It is a Vowel
//
//  Test Case 2:
//  Input  : E
//  Output : It is a Vowel
//
//  Test Case 3:
//  Input  : b
//  Output : It is Not a Vowel
//
////////////////////////////////////////////////////////////////////////////////
