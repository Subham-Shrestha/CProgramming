// WAP to create an array of size 5 and disply them.
/* #include<stdio.h>
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
} */

// WAP to count even and odd elements in an array.
/* #include<stdio.h>
int main(){
    int  i, evenCount = 0, oddCount = 0, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter elements of the array: \n");
    int arr[size];
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);
    return 0;
} */

// WAP to find the second largest and second smallest elements in an array.
/* #include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array : \n");
    scanf("%d", &size);
    int num[size];
    printf("Enter %d elements : \n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &num[i]);
    }
    int largest = num[0];
    int secondLargest = num[1];
    for(int i = 1; i < size; i++){
        if(num[i] > largest){
            secondLargest = largest;
            largest = num[i];
        }else if(num[i] != largest && num[i] > secondLargest){
            secondLargest = num[i];
        }
    }
    int smallest = num[0];
    int secondSmallest = num[1];
    for(int i = 1; i < size; i++){
        if(num[i] < smallest){
            secondSmallest = smallest;
            smallest = num[i];
        }else if(num[i] != smallest && num[i] < secondSmallest){
            secondSmallest = num[i];
        }
    }
    printf("The second smallest element is : %d\n", secondSmallest);
    printf("The second largest element is : %d\n", secondLargest);
    return 0;
} */

// WAP to sort an array of n size using bubble sort concept.
/* #include<stdio.h>
int main(){
    int size, i, j;
    printf("Enter the size of array : \n");
    scanf("%d", &size);
    int num[size];
    printf("Enter %d elements : \n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &num[i]);
    }
    for(i = 0; i < size - 1; i++){
        for(j = 0 ; j < size - i - 1; j++){
            if(num[j] > num[j + 1]){
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    printf("Array in ascending order : \n");
    for(int i = 0; i < size; i++){
        printf("%d\n", num[i]);
    }
    return 0;
} */

