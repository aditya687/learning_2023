#include <stdio.h>

void encode(char *string) {
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] += 3;
    }
}

void decode(char *string) {
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] -= 3;
    }
}

int main() {
    char str[] = "Hello, world!";

    printf("Original string: %s\n", str);

    encode(str);
    printf("Encoded string: %s\n", str);

    decode(str);
    printf("Decoded string: %s\n", str);

    return 0;
}
