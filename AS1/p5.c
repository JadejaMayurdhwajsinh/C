#include <stdio.h>

int main()
{
    int num;
    int f = -1, dis = 0;

    printf("Enter the sequence of non-negative integers terminated by -1:\n");
    while (1)
    {
        scanf("%d", &num);

        if (num == -1)
        {
            printf("\n enter atleast 1 letter before -1");
            break;
        }

        if (f == -1)
        {
            f = num;
        }
        else if (num != f)
        {
            dis = 1;
        }
    }

    if (f == -1)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", dis);
    }

    return 0;
}
