#include <stdio.h>

int find_greatest(int a, int b, int c);

int main() {
    int num1, num2, num3, greatest;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    greatest = find_greatest(num1, num2, num3);
    
    printf("The greatest number is %d\n", greatest);
    
    return 0;
}

int find_greatest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
