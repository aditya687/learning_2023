#include <stdio.h>

int is_vowel(char ch) {
    int isVowel = 0;
    
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            isVowel = 1;
            break;
        default:
            isVowel = 0;
    }
    
    return isVowel;
}

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if (is_vowel(ch))
        printf("Vowel\n");
    else
        printf("Not Vowel\n");
    
    return 0;
}
