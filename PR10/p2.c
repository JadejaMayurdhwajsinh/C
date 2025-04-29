#include <stdio.h>
int main()
{
    int num = 25;
    int *ptr = &num;
    int **ptrToPtr = &ptr;

    printf("Address of num: %p, Value: %d\n", &num, num);
    printf("Address of ptr: %p, Value: %p, Points to: %d\n", &ptr, ptr, *ptr);
    printf("Address of ptrToPtr: %p, Value: %p, Points to: %p\n", &ptrToPtr, ptrToPtr, *ptrToPtr);

    return 0;
}