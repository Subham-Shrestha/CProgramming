// WAP to input two numbers in a pointer and add two numbers using pointers.
/* #include<stdio.h>
int main(){
    int *ptr1, *ptr2, *ptr_sum;
    int num1, num2, sum;
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    ptr_sum = &sum;
    *ptr_sum = *ptr1 + *ptr2;
    printf("Sum of two numbers is : %d\n", *ptr_sum);
    return 0;
} */

// WAP to create an array of size 5 and find the largest element in array suing pointers.
/* #include<stdio.h>
int main(){
    int arr[5], *ptr, largest;
    printf("Enter 5 numbers : \n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    largest = *ptr;
    for (int i = 0; i < 5; i++){
        if(ptr[i] > largest){
            largest = ptr[i];
        }
    }
    printf("Largest element : %d\n", largest);
    return 0;
} */

// WAP to input N numbers in an array and reverse an array using pointers.
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *start, *end, temp;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    start = arr;       
    end = arr + n - 1; 
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// WAP to dynamically allocate memory for N integers using pointers, store values and display them.
