#include <stdio.h>

// Macro to convert a decimal digit to BCD
#define DECIMAL_TO_BCD(digit) (((digit / 10) << 4) | (digit % 10))

int main() {
    int decimalNumber = 45; // Example decimal number
    
    // Convert decimal to BCD
    unsigned char bcdNumber = DECIMAL_TO_BCD(decimalNumber);
    
    printf("Decimal number: %d\n", decimalNumber);
    printf("BCD number: 0x%02X\n", bcdNumber);

    return 0;
}
