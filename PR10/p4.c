#include<stdio.h>
int main() {
    int values[5] = {10, 20, 30, 40, 50};
    int *pointers[5];

    for (int i = 0; i < 5; i++) {
        pointers[i] = &values[i];
    }

    for (int i = 0; i < 5; i++) {
        printf("Pointer[%d]: Address = %p, Value = %d\n", i, pointers[i], *pointers[i]);
    }

    return 0;
}