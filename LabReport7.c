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
/* #include <stdio.h>
int main(){
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *start, *end, temp;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    start = arr;
    end = arr + n - 1;
    while (start < end){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Reversed array:\n");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
} */

// WAP to dynamically allocate memory for N integers using pointers, store values and display them.
/* #include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i;
    int *ptr;
    printf("Enter the size : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter %d numebrs :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The numbers are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    return 0;
} */

// WAP to define a structure Students and display it's details.
/* #include<stdio.h>
struct Students{
    int roll, cls;
    char name[100];
};
int main(){
    struct Students std;
    printf("Enter Roll Number: ");
    scanf("%d", &std.roll);
    printf("Enter class : ");
    scanf("%d", &std.cls);
    printf("Enter Name: ");
    scanf("%s", std.name);
    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", std.roll);
    printf("Name: %s\n", std.name);
    printf("Class %d\n", std.cls);
    return 0;
} */

// WAP to store and display N students using an array of structures.
/* #include <stdio.h>
struct Student{
    int roll;
    char name[100];
    float marks;
};
int main(){
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (i = 0; i < n; i++){
        printf("\nEnter details of %d Student\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        getchar();
        printf("Name: ");
        fgets(s[i].name, 100, stdin);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nStudent Details\n");
    for (i = 0; i < n; i++){
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n");
    }
    return 0;
} */

// WAP to find and display the student with highest marks using structure.
/* #include <stdio.h>
struct Student{
    int roll;
    char name[50];
    int marks;
};

int main(){
    int n, i, maxIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (i = 0; i < n; i++){
        printf("\nEnter details for %d student \n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }
    for (i = 1; i < n; i++){
        if (s[i].marks > s[maxIndex].marks){
            maxIndex = i;
        }
    }
    printf("\nStudent with Highest Marks\n");
    printf("Roll Number: %d\n", s[maxIndex].roll);
    printf("Name: %s\n", s[maxIndex].name);
    printf("Marks: %d\n", s[maxIndex].marks);
    return 0;
} */

// WAP to pass a structure to a function and display it's members.
/* #include <stdio.h>
struct Student{
    int id;
    char name[50];
};
void display(struct Student s){
    printf("\nStudent Details\n");
    printf("Student ID: %d\n", s.id);
    printf("Student Name: %s\n", s.name);
}
int main(){
    struct Student s1;
    printf("Enter Student ID: ");
    scanf("%d", &s1.id);
    printf("Enter Student Name: ");
    scanf("%s", s1.name);
    display(s1);
    return 0;
} */

// WAP to store student details using a nested structure
/* #include<stdio.h>
    struct Address{
    char city[50];
    int pin_code;
};
struct Student{
    int roll;
    char name[50];
    struct Address addr;
};
int main(){
    int n;
    printf("Enter number of students : ");
    scanf("%d", &n);
    struct Student std[n];
    for (int i = 0; i < n; i++){
        printf("Enter Roll Number: ");
        scanf("%d", &std[i].roll);
        printf("Enter Name: ");
        scanf("%s", std[i].name);
        printf("Enter City: ");
        scanf("%s", std[i].addr.city);
        printf("Enter Pin Code: ");
        scanf("%d", &std[i].addr.pin_code);
        printf("\n");
    }
    printf("\nStudent Details\n");
    for (int i = 0; i < n; i++){
        printf("Roll: %d\n", std[i].roll);
        printf("Name: %s\n", std[i].name);
        printf("City: %s\n", std[i].addr.city);
        printf("Pin Code: %d\n", std[i].addr.pin_code);
        printf("\n");
    }
    return 0;
} */

// WAP to use pointer to structure to read and display student details.
#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct Student s;
    struct Student *ptr;
    ptr = &s;
    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);
    printf("Enter Name: ");
    scanf("%s", ptr->name);
    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);
    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}