// Array basics.
/* Array is a collection of elements of the same data type stored in contiguous memory locations. 
   Array index starts with 0 instead of 1.*/
// Array without using loop when marks is initialized. Using array with loop is encouraged instead of using it wtihout loop.
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
#include<stdio.h>
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
}

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

