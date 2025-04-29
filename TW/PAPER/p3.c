#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;

    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

int main() {
    int binary;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    int decimal = binaryToDecimal(binary);
    printf("The decimal representation is: %d\n", decimal);

    return 0;
}
