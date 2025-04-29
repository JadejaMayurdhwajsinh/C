#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int upper = 1, lower = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int num;
            scanf("%d", &num);
            if (i < j && num != 0)
            {
                lower = 0;
            }

            if (i > j && num != 0)
            {
                upper = 0;
            }
        }
    }
    if(upper==1 && lower==1)
    {
        printf("no\n");
    }
    else if (upper || lower)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}
