#include<stdio.h>

int findInFibonaci(int n){
    if(n <= 2)
        return 1;
    return findInFibonaci(n - 1) + findInFibonaci(n - 2);
}
int main(){
    int n = 10;
    printf("%d",findInFibonaci(n));
}
// void Febonaci(int n1,int n2,int num){
//     if(n1 + n2 > num)
//         return;
//     printf(" %d",(n1 + n2));
//     Febonaci(n2,n1+n2,num);
// }

// int main(){
//     int n = 500;
//     printf("0");
//     Febonaci(0,1,n);
// }