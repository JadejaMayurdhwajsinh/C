#include <stdio.h>

// Function for series 1: 1 + 4 - 9 + 16 - 25 + ...
void series1(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum -= i * i;
        else
            sum += i * i;
    }
    printf("\n%.2lf",sum);
}

// Function for series 2: 1 + 1/4 + 1/9 + 1/16 + ...
void series2(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (i * i);
    }
    printf("\n%lf",sum);
}

// Function for series 3: Fibonacci sequence 1 + 1 + 2 + 3 + 5 + ...
void series3(int n) {
    int a = 1, b = 1, temp;
    double sum = a; // Start with the first Fibonacci number
    for (int i = 2; i < n; i++) {
        temp = b;
        b = a + b;
        a = temp;
        sum += b;
    }
    printf("\n%lf",sum);
}

// Function for series 4: 1 - 1/2 + 1/3 - 1/4 + ...
void series4(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum -= 1.0 / i;
        else
            sum += 1.0 / i;
    }    
    printf("\n%lf",sum);
}

// Function for series 5: 1/2 + 2/3 + 3/4 + ... (N-1)/N
void series5(int n) {
    double sum = 0;
    for (int i = 1; i < n; i++) {
        sum += (double)i / (i + 1);
    }
    printf("\n%lf",sum);
}

// Function for series 6: 1! + 2! + 3! + ... N!
void series6(int n) {
    double sum = 0;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Calculate i!
        sum += factorial;
    }
    printf("\n%lf",sum);

}

int main() {
    int choice, n;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);
    series1(n);
    series2(n);
    series3(n);
    series4(n);
    series5(n);
    return 0;
}
