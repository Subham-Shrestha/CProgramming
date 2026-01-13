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

// WAP to merge two arrays into a third array.
/* #include<stdio.h>
int main(){
    int size1, size2, i, j;
    printf("Enter the size of first array : \n");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements for first array : \n", size1);
    for(i = 0; i < size1; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of second array : \n");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d elements for second array : \n", size2);
    for(i = 0; i < size2; i++){
        scanf("%d", &arr2[i]);
    }
    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];
    for(i = 0; i < size1; i++){
        mergedArray[i] =  arr1[i];
    }
    for(j = 0; j < size2; j++){
        mergedArray[i + j] = arr2[j];
    }
    printf("Merged array : \n");
    for(i = 0; i < mergedSize; i++){
        printf("%d ", mergedArray[i]);
    }
    return 0;
} */

// WAP to insert an element at given position.
/* #include<stdio.h>
int main(){
    int arr[100];
    int size, pos, value;
    printf("Enter the size of array(up to 100): ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to insert(0 to %d): ", size - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos > size) {
        printf("Invalid position!\n");
        return 0;
    }
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    printf("Array after insertion:\n");
    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
} */

// WAP to separate odd elements into two array
/* #include <stdio.h>
int main() {
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size], even[size], odd[size];
    int evenCount = 0, oddCount = 0;
    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }
    printf("Even elements:\n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    } 
    printf("\n");
    printf("Odd elements:\n");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    return 0;
} */

// WAP to transpose a matrix(3x2).
/* #include <stdio.h>
int main() {
    int matrix[3][2], transpose[2][3];
    printf("Enter elements of a 3x2 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transposed matrix (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

// WAP to copy one array to another.
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int array[size], copy[size];
    printf("Enter elements : \n");
    for(int i = 0; i < size; i++){
        scanf("%d", &array[i]);
        copy[i] = array[i];
    }
    printf("The copied array is : \n");
    for(int j = 0; j < size; j++){
        printf("%d\n", copy[j]);
    }
    return 0;
}