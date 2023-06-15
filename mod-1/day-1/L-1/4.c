#include <stdio.h>

int main() {
    float oper1, oper2;
    char oper;
    float res;

    // Read inputs from the user
    printf("Enter 1st num: ");
    scanf("%f", &oper1);

    printf("Enter the operator: ");
    scanf(" %c", &oper);

    printf("Enter 2nd num: ");
    scanf("%f", &oper2);

    // Perform the calculation based on the operator
    switch (oper) {
        case '+':
            res = oper1 + oper2;
            break;
        case '-':
            res = oper1 - oper2;
            break;
        case '*':
            res = oper1 * oper2;
            break;
        case '/':
            // Check for division by zero
            if (oper2 != 0) {
                res = oper1 / oper2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  // Exit the program with an error code
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;  // Exit the program with an error code
    }

    // Print the result
    printf("Result: %.2f\n", res);

    return 0;
}
