// WAP to print Hello World.
// #include <stdio.h>
// int main(){
//     printf("Hello World\n");
//     return 0;
// }

// WAP to find simple interest.
// #include <stdio.h>
// int main(){
//     float principal, rate, time, simple_interest;
//     printf("Enter principal amount: ");
//     scanf("%f", &principal);
//     printf("Enter rate of interest: ");
//     scanf("%f", &rate);
//     printf("Enter time in years: ");
//     scanf("%f", &time);
//     simple_interest = (principal * rate * time) / 100;
//     printf("Simple Interest = %.2f\n", simple_interest);
//     return 0;   
// }

// // WAP to swap value of each other of two variables.
// // #include <stdio.h>
// // int main(){
// //     int a, b, temp;
// //     printf("Enter value of a: ");
// //     scanf("%d", &a);
// //     printf("Enter value of b: ");
// //     scanf("%d", &b);
// //     temp = a;
// //     a = b;
// //     b = temp;
// //     printf("After swapping, value of a: %d\n", a);
// //     printf("After swapping, value of b: %d\n", b);
// //     return 0;
// }

// WAP to take string as input and display it in output screen.
#include <stdio.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("You entered: %s\n", str);
    return 0;
}

// WAP to take radius from user and calculate area of circle.
// #include <stdio.h>
// // #define PI 3.14
// int main(){
//     float radius, area;
//     const float PI = 3.14;
//     printf("Enter radius of the circle: ");
//     scanf("%f", &radius);
//     area = PI * radius * radius;
//     printf("Area of the circle = %.2f\n", area);
//     return 0;
// }

// WAP to take two number and find their sum wothout using "+".
// #include <stdio.h>
// int main(){
//     int num1, num2, sum;
//     printf("Enter first and second number: ");
//     scanf("%d %d", &num1, &num2);
//     sum = num1 - (-num2);
//     printf("Sum = %d\n", sum);
//     return 0;
// }

// WAP to convert fahrenheit to celsius.
// #include <stdio.h>
// int main(){
//     float fahrenheit, celsius;
//     printf("Enter temperature in Fahrenheit: ");
//     scanf("%f", &fahrenheit);
//     celsius = (fahrenheit - 32) * 5.0 / 9.0;
//     printf("Temperature in Celsius = %.2f\n", celsius);
//     return 0;
// }