#include<stdio.h>
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    // snprintf(data.str, sizeof(data.str), "Hello");
    data.f = 220.5;
    data.i = 10;
    // data.str = "Kartik";
    printf("Data.i: %d\n", data.i);

    printf("Data.f: %.2f\n", data.f);

    printf("Data.str: %s\n", data.str);

    return 0;
}
