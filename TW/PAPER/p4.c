// #include <stdio.h>
// // Function to reverse the number
// unsigned int reverseNumber(unsigned int num) {
//     unsigned int reversed = 0;

//     // Reverse the number by taking the last digit one by one
//     while (num > 0) {
//         reversed = reversed * 10 + num % 10;
//         num = num / 10;  // Remove the last digit
//     }
//     return reversed;
// }
// // Function to calculate the sum of digits
// unsigned int sumOfDigits(unsigned int num) {
//     unsigned int sum = 0;

//     // Add digits one by one
//     while (num > 0) {
//         sum += num % 10;
//         num = num / 10;  // Remove the last digit
//     }

//     return sum;
// }

// int main() {
//     unsigned int num;

//     // Get a 32-bit unsigned integer from the user
//     printf("Enter a 32-bit unsigned integer: ");
//     scanf("%u", &num);

//     // Get the reversed number
//     unsigned int reversed = reverseNumber(num);
//     printf("Reversed number: %u\n", reversed);

//     // Get the sum of digits
//     unsigned int sum = sumOfDigits(num);
//     printf("Sum of digits: %u\n", sum);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        return 1; // It's a leap year
    }
    return 0; // Not a leap year
}

int main(int argc, char *argv[]) {
    // Loop through all the years provided in command-line arguments
    for (int i = 1; i < argc; i++) {
        int year = atoi(argv[i]); // Convert the argument to an integer
        if (isLeapYear(year)) {
            printf("%d is a leap year.\n", year);
        } else {
            printf("%d is not a leap year.\n", year);
        }
    }
    return 0;
}
