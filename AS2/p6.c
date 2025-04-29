#include<stdio.h>
void main(){
    for(int i = 5; i > 0; i--){
        for(int j = 1; j <= i; j++){
            printf(" %d %c",j,'A' + j - 1);
        }
        printf("\n");
    }
}