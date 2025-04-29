#include <stdio.h>


int main() {
    int N1, N2;
    

    
    printf("Enter the size of the first array: ");
    scanf("%d", &N1);
    int array1[N1];
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < N1; i++) {
        scanf("%d", &array1[i]);
    }

    
    printf("Enter the size of the second array: ");
    scanf("%d", &N2);
    int array2[N2];
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < N2; i++) {
        scanf("%d", &array2[i]);
    }

    
    for (int i = 0; i < N1 - 1; i++) {
        for (int j = 0; j < N1 - i - 1; j++) {
            if (array1[j] > array1[j + 1]) {
                int temp = array1[j];
                array1[j] = array1[j + 1];
                array1[j + 1] = temp;
            }
        }
    }

    
    for (int i = 0; i < N1; i++) {
        int found = 0;
        for (int j = 0; j < N2; j++) {
            if (array1[i] == array2[j]) {
                found = 1;
                break;
            }
        }
        
        if (!found) {
            printf("%d\n", array1[i]);
            return 0;
        }
    }

    
    printf("NO\n");
    return 0;
}
