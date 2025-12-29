// Array basics.
/* Array is a collection of elements of the same data type stored in contiguous memory locations. 
   Array index starts with 0 instead of 1.*/
#include<stdio.h>
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
}