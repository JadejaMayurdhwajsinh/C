#include<stdio.h>

int countDig(int num){
    if(num == 0)
        return 0;
    return 1 + countDig(num / 10);
}

int main(){
    int n = 123456789;
    printf("%d",countDig(n));
}