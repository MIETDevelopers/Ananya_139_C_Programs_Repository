//A C Program to check whether the alphabet is vowel or consonant.
//vowels: a, e, i, o, u
//consonants: remaining all except vowels.
#include <stdio.h>

int main()
{
    char ch;

    // Input an alphabet from user 
    printf("Enter any alphabet: ");
    scanf("%c", &ch);   //scan the alphabet entered by the user.

    // Switch value of character(ch)
    switch(ch)
    {
        case 'a': 
            printf("Vowel");
            break;
        case 'e': 
            printf("Vowel");
            break;
        case 'i': 
            printf("Vowel");
            break;
        case 'o': 
            printf("Vowel");
            break;
        case 'u': 
            printf("Vowel");
            break;
        case 'A': 
            printf("Vowel");
            break;
        case 'E': 
            printf("Vowel");
            break;
        case 'I': 
            printf("Vowel");
            break;
        case 'O': 
            printf("Vowel");
            break;
        case 'U': 
            printf("Vowel");
            break;
        default: 
            printf("Consonant");
    }

    return 0;
}
