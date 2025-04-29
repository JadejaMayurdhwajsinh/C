#include<stdio.h>
// int func(int num)
// {
//     int count=0;
//     while(num)
//     {
//         count++;
//         num>>=1;
//     }
//     return (count);
// }
// int main()
// {
//     printf(func(256));
//     return 0;
// }

int var()
{
    static int num=13;
    return num--;
}
int main()
{
    for(var();var();var())
        printf("%d ",var());
    return 0;
}