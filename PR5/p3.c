#include <stdio.h>

int main()
{
    int height;
    printf("Enter the height");
    scanf("%d", &height);
    if (height <= 150)
        printf("person is low in height");
    else if (height > 150 && height < 195)
        printf("person is average in height");
    else
        printf("person is tall");
    return 0;
}
