// WAP to inout and add two numbers.
/*#include<stdio.h>
int main(){
    int num1 = 5, num2 = 2, sum = 0;
    sum = num1 + num2; // adding two numbers from the declared variable.
    printf("The sum of %d and %d is : %d", num1, num2, sum);
    return 0; */

// WAP to inout two numbers and find sum, sub,  mul, div.
#include<stdio.h>
int Sum(int num1, int num2){ //creating a sum function for code reusability.
    int sum = num1 + num2;
    printf("The sum of %d and %d is : %d", num1, num2, sum); 
    return 0;
}
int Difference(int num1, int num2){ //creating a difference function for code resuability.
    int diff = num1 - num2;
    printf("The difference of %d and %d is : %d", num1, num2, diff);
    return 0;
} 
int Product(int num1, int num2){ //creating a product function for code reusability.
    int product = num1 * num2;
    printf("The product of %d and %d is  : %d", num1, num2, product);
    return 0;
}
int Division(int num1, int num2){ //creatiung a division funciton for code reusability.
    if(num2 == 0){ // checking the denominator as zero or not for infinity case.
        printf("Zero divisible is infinity."); 
    }
    else{
        float divi = num1 / num2;
        printf("The division of %d and %d is : %.2f", num1, num2, divi);
    }
    return 0;
}
int main(){
    int num1, num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    Sum(num1, num2); //Calling the function Sum
    Difference(num1, num2); //Calling the function Difference
    Product(num1, num2); //Calling the function Product
    Division(num1, num2); //Calling the function Division
    return 0;
}