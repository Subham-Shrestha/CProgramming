// WAP to input 2 numbers and check and print the greater number.
#include <stdio.h> 
int main() {
    int num1, num2;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
 
    if (num1 > num2) {
        printf("Greater number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("Greater number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}