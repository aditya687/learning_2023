#include <stdio.h>

int set_bit(int num) {
    return num | 1;
}

int clear_bit(int num) {
    return num & ~(1 << 31);
}

int toggle_bit(int num) {
    return num ^ (1 << 16);
}

int bit_operations(int num, int oper_type) {
    if (oper_type == 1)
        return set_bit(num);
    else if (oper_type == 2)
        return clear_bit(num);
    else if (oper_type == 3)
        return toggle_bit(num);
    else {
        printf("Error: Invalid operation type. Please try again: ");
        scanf("%d", &oper_type);
        return bit_operations(num, oper_type);
    }
}

int main() {
    int num, oper_type;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Enter operation type (1: Set 1st bit, 2: Clear 31st bit, 3: Toggle 16th bit): ");
    scanf("%d", &oper_type);

    int result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}
