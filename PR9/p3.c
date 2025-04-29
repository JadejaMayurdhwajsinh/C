#include<stdio.h>

int Factorial(int num){
    if(num == 0)
        return 1;
    return num * Factorial(num - 1);
}

int main(){
    int n = 7;
    printf("%d",Factorial(n));
}