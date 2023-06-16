#include <stdio.h>

void findSmallAndLargeDigits(int n) {
    int smallDigit = 9;
    int largeDigit = 0;

    for (int i = 1; i <= n; i++) {
        int num;
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        while (num != 0) {
            int digit = num % 10;
            if (digit < smallDigit) {
                smallDigit = digit;
            }
            if (digit > largeDigit) {
                largeDigit = digit;
            }
            num /= 10;
        }
    }

    if (smallDigit == 9 && largeDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallDigit);
        printf("Largest Digit: %d\n", largeDigit);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    findSmallAndLargeDigits(n);

    return 0;
}
