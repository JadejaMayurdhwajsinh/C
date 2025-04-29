#include<stdio.h>

int countDig(int num){
    if(num == 0)
        return 0;
    return (num % 10) + countDig(num / 10);
}

int main(){
    int n = 1235;
    printf("%d",countDig(n));
}