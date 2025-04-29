#include<stdio.h>
void main(){
    int size,count = 0;

    printf("Enter a size of an element:\n");
    scanf("%d",&size);

    int a[size];
    printf("Enter Array Element:\n");
    for(int i = 0; i < size; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < size; i++){
        int unique = 1;
        for(int j = 0; j < i; j++){
            if(a[i] == a[j]){
                unique = 0;
                break;
            }
        }
        if(unique){
            count++;
        }
    }
    printf("Disticnt Element = %d ",count);
}