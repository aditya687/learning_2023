#include <stdio.h>

int findBig(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int number1 = 10;
    int number2 = 20;

    int largeNum = findBig(number1, number2);

    printf("The biggest number is: %d\n", largeNum);

    return 0;
}
