// WAP to create an array of size 5 and disply them.
#include<stdio.h>
int main(){
    int arr[5], i;
    printf("Enter 5 elements of the array: \n");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are: \n");
    for(i = 0; i < 5; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
} 