#include<stdio.h>

// int isRev(int n,int r)
// {
   
//     if (n == 0) 
//     {
//         return rev;
//     }
//     rev = rev * 10 + n % 10;
//     return isRev(n / 10, rev);
// }
// int main()
// {
//     int r=0;
//    int n=1552;
//    printf("%d",isRev(n,r));
//     return 0;
// }
#include<math.h>
int isArm(int n);
int main()
{
    int n=153;
    printf("%d is a prime number",isArm(n));
    return 0;
}
int isArm(int num)
{
    int sum = 0;
    int n = num;
    int size = 0;
    while (n != 0)
    {
        size++;
        n /= 10;
    }
    n = num;
    while (n != 0)
    {
        int dig = n % 10;
        sum += (int)pow(dig, size);
        n /= 10;
    }
    if (sum == num)
        return num;
    return 0;
}


// int isEven(int n);
// int isOdd(int n);
// int main()
// {
//     int n=11;
//     if(isEven(n)){
//         printf("Even ");
//     }
//     else{
//         printf("Odd");
//     }
//     return 0;
// }
// int isEven(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     } 
//     return isOdd(n-1);
// }
// int isOdd(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     } 
//     return isEven(n-1);
// }