#include<stdio.h>
// int fib(int n,int a,int b){
//     if(n==0){
//         return 0;
//     }
//     printf("%d ",a);
//     return fib(n-1,a,a+b);
// }

// void main(){
//     fib(10,0,1);
// }

void main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return;
    }

    int a = 0, b = 0;

    // Convert the first argument to integer
    for (int i = 0; argv[1][i] != '\0'; i++) {
        a = a * 10 + (argv[1][i] - '0');
    }

    // Convert the second argument to integer
    for (int i = 0; argv[2][i] != '\0'; i++) {
        b = b * 10 + (argv[2][i] - '0');
    }

    int sum = a + b;
    printf("Sum: %d\n", sum);
}

