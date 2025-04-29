
#include <stdio.h>

int main()
{
    int cur, prev, c = 0;

    printf("Enter sorted array ending with -1: ");
    scanf("%d", &prev);
    while (1)
    {
        scanf("%d", &cur);

        if (cur == -1)
        {
            c++;
            break;
        }

        // Increment count only if the current number is different from the previous one
        if (cur != prev)
        {
            c++;
            prev = cur;
        }
    }
    printf("Distinct Elements in array = %d\n", c);

    return 0;
}
