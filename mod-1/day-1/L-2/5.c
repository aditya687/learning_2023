#include <stdio.h>
#include <ctype.h>

void recursive_char_type(char ch) {
    if (ch == '\0') return;
    
    int type;
    
    if (isalpha(ch)) {
        type = isupper(ch) ? 1 : 2;
    } else if (isdigit(ch)) {
        type = 3;
    } else if (isprint(ch)) {
        type = 4;
    } else {
        type = 5;
    }
    
    printf("Character: %c, Type: %d\n", ch, type);
    
    recursive_char_type(ch + 1);
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Character types:\n");
    recursive_char_type(str[0]);
    
    return 0;
}
