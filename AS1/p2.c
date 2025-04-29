#include <stdio.h>

int main()
{
    int m, n;

    printf("Enter two Numbers:\n");
    scanf("%d %d", &m, &n);

    if (n == 0)
    {
        printf("Error: Division by zero\n");
        return 0;
    }
    int result = (m % n == 0) ? m / n : 0;
    printf("%d\n", result);
    return 0;
}
