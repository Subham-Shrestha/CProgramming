/* #include<stdio.h>
#include<stdlib.h>
int main(){ */
    /* int *arr, i;
    arr = (int*)malloc(5 * sizeof(int));
    printf("Enter 5 numbers : \n");
    for(i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    printf("Your numbers are : ");
    for (i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    free(arr); */

    // WAP to input n numbers and find the sum of the numbers.
    /* Using malloc()
    int num, i, sum = 0;
    int *arr;
    printf("Enter the number of numbers to find the sum : \n");
    scanf("%d", &num);
    arr = (int*)malloc(num * sizeof(int));
    printf("Enter %d numbers : \n", num);
    for(i=0; i<num; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of the numbers is : %d\n", sum);
    free(arr); */

    /* Using calloc()
    int num, i, sum = 0;
    int *arr;
    printf("Enter the number of numbers to find the sum : \n");
    scanf("%d", &num);
    arr = (int *)calloc(num, sizeof(int));
    printf("Enter %d numbers : \n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of the numbers is : %d\n", sum);
    free(arr); */

    //Using realloc 
    /* int num, i, sum = 0;
    int *arr;
    printf("Enter the number of numbers to find the sum : \n");
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    printf("Enter %d numbers : \n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int oldsum = sum;
    int new_size = 2;
    arr = (int *)realloc(arr, new_size * sizeof(int));
    printf("Enter %d new numbers : \n", new_size);
    for (i = 0; i < new_size; i++)
    {
        scanf("%d", &arr[i]);
        sum = oldsum + arr[i];
    }
    printf("Sum of the numbers is : %d\n", sum);
    free(arr); 


    return 0;
} */