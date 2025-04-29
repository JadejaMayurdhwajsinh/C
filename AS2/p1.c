#include <stdio.h>


int find_even(int k) {
    int num;
    int count = 0;
    int found = -1;
    
    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break;  
        }
        if (num % 2 == 0) {  
            count++;
            if (count == k) {
                found = num;
                break;  
            }
        }
    }
    return found;  
}

int main() {
    int k, result;

    printf("Enter Key to Search:\n");
    scanf("%d", &k);

    printf("Enter Elements:\n");
    result = find_even(k);  

    if (result != -1) {
        printf("Searched Found: %d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}
