#include <stdio.h>
int main(){
    // Program 1: Print marks without loop
    printf("Program 1: Marks without loop\n");
    int marks1[5] = {30, 24, 55, 28, 35};
    printf("Subject 1: %d\n", marks1[0]);
    printf("Subject 2: %d\n", marks1[1]);
    printf("Subject 3: %d\n", marks1[2]);
    printf("Subject 4: %d\n", marks1[3]);
    printf("Subject 5: %d\n", marks1[4]);
    printf("\n");

    // Program 2: Print marks with loop
    printf("Program 2: Marks with loop\n");
    int marks2[5] = {30, 24, 55, 28, 35};
    for(int i = 0; i < 5; i++){
        printf("Subject %d: %d\n", i+1, marks2[i]);
    }
    printf("Random marks %d\n", marks2[234]); // Out of bounds
    printf("\n");

    // Program 3: Input marks of 5 students
    printf("Program 3: Input marks of 5 students\n");
    int marks3[5];
    printf("Enter marks of 5 students: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &marks3[i]);
        printf("Subject %d: %d\n", i + 1, marks3[i]);
    }
    printf("\n");

    // Program 4: Calculate total marks
    printf("Program 4: Calculate total marks\n");
    int marks4[5], sum4 = 0;
    printf("Enter marks of 5 subjects: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &marks4[i]);
        sum4 += marks4[i];
    }
    printf("Total marks obtained: %d\n\n", sum4);

    // Program 5: Print array in reverse
    printf("Program 5: Print array in reverse\n");
    int arr5[5] = {1, 2, 3, 4, 5}; // Using sample data
    printf("Elements: ");
    for(int i = 0; i < 5; i++) printf("%d ", arr5[i]);
    printf("\nElements in reverse order: ");
    for(int i = 4; i >= 0; i--){
        printf("%d ", arr5[i]);
    }
    printf("\n\n");

    // Program 6: Sum of even index values
    printf("Program 6: Sum of even index values\n");
    int num6[6] = {1, 2, 3, 4, 5, 6}; // Sample data
    int sum6 = 0;
    printf("Elements: ");
    for(int i = 0; i < 6; i++) printf("%d ", num6[i]);
    printf("\n");
    for(int i = 0; i < 6; i++){
        if(i % 2 == 0){
            sum6 += num6[i];
        }
    }
    printf("The sum of even index elements is: %d\n\n", sum6);

    // Program 7: Find smallest element
    printf("Program 7: Find smallest element\n");
    int size7 = 5;
    int num7[5] = {10, 5, 8, 2, 15}; // Sample data
    int smallest = num7[0];
    printf("Elements: ");
    for(int i = 0; i < size7; i++) printf("%d ", num7[i]);
    printf("\n");
    for(int i = 1; i < size7; i++){
        if(num7[i] < smallest){
            smallest = num7[i];
        }
    }
    printf("The smallest element is: %d\n\n", smallest);

    // Program 8: Find greatest element
    printf("Program 8: Find greatest element\n");
    int size8 = 5;
    int num8[5] = {10, 5, 8, 2, 15}; // Sample data
    int greatest = num8[0];
    printf("Elements: ");
    for(int i = 0; i < size8; i++) printf("%d ", num8[i]);
    printf("\n");
    for(int i = 1; i < size8; i++){
        if(num8[i] > greatest){
            greatest = num8[i];
        }
    }
    printf("The greatest element is: %d\n\n", greatest);

    // Program 9: Find average of 8 numbers
    printf("Program 9: Find average of 8 numbers\n");
    int num9[8] = {1, 2, 3, 4, 5, 6, 7, 8}; // Sample data
    int sum9 = 0;
    float average;
    printf("Numbers: ");
    for(int i = 0; i < 8; i++){
        printf("%d ", num9[i]);
        sum9 += num9[i];
    }
    average = sum9 / 8.0;
    printf("\nThe average is: %.2f\n", average);

    return 0;
}