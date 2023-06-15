#include <stdio.h>

int sumAlterElem(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = sumAlterElem(arr, size);
    printf("Sum of alternate elements: %d\n", res);

    return 0;
}
