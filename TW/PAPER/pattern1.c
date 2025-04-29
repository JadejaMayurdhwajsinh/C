#include<stdio.h>
int main()
{
int i,j,k;
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2; j++)
        {   
            if(j>=2-i && j<=i+2)
            {
                printf("*");
            }
            for(k-0;k<=2;k++)
            {
                if(k==j)
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
   return 0;
}
    // int i,j;
    // for(i=0;i<5;i++){
    //     for (int j = 0; j < 5-i; j++)
    //     {
    //         printf(" ");
    //     }
        
    //     for (int  j = 0; j < 5; j++)
    //     {
    //        printf("*");
    //     }
    //     printf("\n");
        //}
    // for(i=0;i<5;i++)
    // {
    //     for(j=0;j<=8;j++)
    //     {
    //         if(j>=4-i && j<=8-i)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
//     return 0;
// }