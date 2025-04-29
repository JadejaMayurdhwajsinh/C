#include<stdio.h>
int main() {
    int arr[15];
    for (int i = 0; i < 15; i++) arr[i] = i + 1;

    int *ptr = arr;

    printf("Base address of array: %p\n", arr);
    for (int i = 0; i < 15; i++) {
        printf("Element %d: Address = %p, Value = %d\n", i, ptr + i, *(ptr + i));
    }

    return 0;
}