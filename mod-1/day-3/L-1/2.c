#include <stdio.h>

int findLargestNumber(int num) {
    int largestNum = 0;
    int divisor = 1;

    for (int i = 0; i < 4; i++) {
        int currentNum = (num / (divisor * 10)) * divisor + (num % divisor);
        if (currentNum > largestNum) {
            largestNum = currentNum;
        }
        divisor *= 10;
    }

    return largestNum;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);
    printf("Largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}
