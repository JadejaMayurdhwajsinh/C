#include <stdio.h>

int main()
{
    int n, fib[n];
    printf("Enter n terms: ");
    scanf("%d", &n);
    fib[0]=0;
    fib[1]=1;

        for (int i = 2; i < n; i++) 
        {
            fib[i]= fib[i-1]+ fib[i-2];
        }
        printf("Fibonacci series: ");
        for (int i = 0; i < n; i++) 
        {
            printf("%d ", fib[i]);
        }
        printf("\n");
    return 0;
}
