#include <stdio.h>

int compareBoxes(int boxA[], int boxB[], int size) {
    for (int i = 0; i < size; i++) {
        int foundMatch = 0;
        for (int j = 0; j < size; j++) {
            if (boxA[i] == boxB[j]) {
                foundMatch = 1;
                break;
            }
        }
        if (foundMatch == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int boxA[] = {200, 9, -90};
    int boxB[] = {-90, 200, 10};
    int size = sizeof(boxA) / sizeof(boxA[0]);

    int result = compareBoxes(boxA, boxB, size);

    printf("Result: %d\n", result);

    return 0;
}
