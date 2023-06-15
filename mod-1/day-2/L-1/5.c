#include <stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    unsigned int a[3] = {0x1, 0xF4, 0x10001};
    int totalBits = 0;

    for (int i = 0; i < 3; i++) {
        totalBits += countSetBits(a[i]);
    }

    printf("The total number of set bits in the given array is: %d\n", totalBits);
    return 0;
}
