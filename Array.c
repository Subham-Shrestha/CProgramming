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
#include<stdio.h>
int main(){
    int marks[5] = {30, 24, 55, 28, 35}; // Initialization of array with values
    for(int i = 0; i < 5; i++){
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }
    return 0;
}


// One dimensional array example.
/* #include<stdio.h>
int main(){
    int marks[5]; // Declaration of an array of size 5
    printf("Enter marks of 5 subjects: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &marks[i]); // Input marks for each subject
    }
    printf("Marks entered are: \n");
    for(int i = 0; i < 5; i++){
        printf("Subject %d: %d\n", i + 1, marks[i]); // Output marks for each subject
    }
    return 0;
} */
