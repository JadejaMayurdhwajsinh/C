#include<stdio.h>
void main(){

    int count = 0;
    float result[100],num;

    printf("Enter Number:\n");
    while(1){
        scanf("%f",&num);
        if(num == -1){
            break;
        }
        result[count++] = num;
    }

        if(count < 3){
            printf("Not Enough Numbers to Average:\n");
        }
            for(int i = 2; i < count; i++){
                float avg = (result[i]+result[i-1]+result[i-2])/3;
                printf("%.1f ",avg);
            }
     printf("\n");
}
