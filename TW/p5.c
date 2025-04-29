#include <stdio.h>

void orbit(int M, int N)
{
    int current = M;
    int count = 0;
    int visited[100] = {0};

    while (!visited[current])
    {
        visited[current] = 1;
        count++;
        current = (2 * current) % N;
    }

    printf("Maximum number of distinct integers: %d\n", count);
}

int main()
{
    int M, N;

    printf("Enter M: ");
    scanf("%d", &M);

    printf("Enter N: ");
    scanf("%d", &N);

    if (M < N)
    {
        orbit(M, N);
    }
    else
    {
        printf("N must be greater than M\n");
    }

    return 0;
}
