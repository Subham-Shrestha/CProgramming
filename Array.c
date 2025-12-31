// Array basics.
/* Array is a collection of elements of the same data type stored in contiguous memory locations. 
   Array index starts with 0 instead of 1.
Array without using loop when marks is initialized. Using array with loop is encouraged instead of using it wtihout loop. */
/* #include<stdio.h>
int main(){
    int marks[5] = {30, 24, 55, 28, 35}; // Initialization of array with values
    printf("Subject 1: %d\n", marks[0]);
    printf("Subject 2: %d\n", marks[1]);
    printf("Subject 3: %d\n", marks[2]);
    printf("Subject 4: %d\n", marks[3]);
    printf("Subject 5: %d\n", marks[4]);
    return 0;
} */
/* #include<stdio.h>
int main(){
    int marks[5] = {30, 24, 55, 28, 35}; // Initialization of array with values. You can either give array size or not. like there is [5] you can keep it empty.
    for(int i = 0; i < 5; i++){
        printf("Subject %d: %d\n", i, marks[i]);
    }
    printf("Random marks %d", marks[234]); // Accessing out of bound index leads to garbage value. It either randomly generates or prints 0.
    return 0;
} */

// WAP to take input of marks of 5 students and print them using array and loop.
// One dimensional array example.
/* #include<stdio.h>
int main(){
    int marks[5]; // Declaration of an array of size 5
    printf("Enter marks of 5 stundets: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &marks[i]); // Input marks for each subject
        printf("Subject %d : %d\n", i + 1, marks[i]); // Output marks for each subject
    }
    
    // for(int i = 0; i < 5; i++){
       
    // }
    return 0;
} */

// WAP to take input of marks of students of 5 subjects and calculate the total marks.
/* #include<stdio.h>
int main(){
    int marks[5];
    int sum = 0;
    printf("Enter marks of 5 subjects: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    printf("Total marks obtained: %d\n", sum);
    return 0;
} */

// WAP to make and array of size 5 and print them in reverse order.
 /* #include<stdio.h>
int main(){
    int arr[5];
    printf("Enter 5 elements: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    printf("Elements in reverse order: \n");
    for(int i = 4; i >= 0; i--){
        printf("%d\n", arr[i]);
    }
    return 0;
} */

// Create an array of size 6 and find the sum of even index values only.
/* #include<stdio.h>
int main(){
    int num[6], sum = 0;
    printf("Enter the elements of 6 : \n");
    for(int i = 0; i < 6; i++){
        scanf("%d", &num[i]);
        if(i% 2 == 0){
            sum = sum + num[i];
        }
    }
    printf("The sum of all even elements is : %d", sum);
    return 0;
} */

// WAP to take imput for size of an array and again take input value upto that number and find the smallest one.
/* #include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array : \n");
    scanf("%d", &size);
    int num[size], smallest = num[0];
    printf("Enter %d elements : \n", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &num[i]);
    }
    for(int i = 1; i < size; i++){
        if(num[i] < smallest){
            smallest = num[i];
        }
    }
    printf("The smallest element is : %d\n", smallest);
    return 0;
} */

// WAP to take input for size of an array and find the greatest element.
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
    int greatest = num[0];
    for(int i = 1; i < size; i++){
        if(num[i] > greatest){
            greatest = num[i];
        }
    }
    printf("The greatest element is : %d\n", greatest);
    return 0;
} */

// WAP to find the average of 8 numbers.
/* #include<stdio.h>
int main(){
    int num[8];
    int sum = 0;
    float average;
    printf("Enter 8 numbers : \n");
    for(int i = 0; i < 8; i++){
        scanf("%d", &num[i]);
        sum += num[i];
    }
    average = sum / 8.0;
    printf("The average is : %.2f\n", average);
    return 0;
} */

// WAP to find the second largest number in an array.
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
    printf("The second largest element is : %d\n", secondLargest);
    return 0;
} */

// Sorting : Used to arrange elements in ascending or descending order.