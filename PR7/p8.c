#include<stdio.h>
int main()
{
    int n,num[n],max,min;
    printf("How many num:");
    scanf("%d",&n);
    printf("\n Enter number:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    for(int i=0;i<n;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    min=num[0];
    for(int i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }

    printf("\n max= %d",max);
    printf("\n min= %d",min);
    return 0;
}