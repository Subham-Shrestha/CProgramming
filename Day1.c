// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter the value of a and b\n");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     printf("The sum of a and b is %d",c);
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int a, b, c;
//     printf("Enter the value of a and b\n");
//     if (scanf("%d %d", &a, &b) != 2) {
//         fprintf(stderr, "Invalid input\n");
//         return 1;
//     }
//     c = a + b;
//     printf("The sum of a and b is %d\n", c);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int age = 20;
//     float gpa = 3.92;
//     char grade = 'A';
//     printf("\tAge : %d\n \tGPA : %.2f\n \tGrade : %c\n" , age, gpa, grade);
// }

// #include<stdio.h>
// int main(){
//     char grade = 'A+';
//     printf("Grade =%c", grade);
// }
// #include<stdio.h>
// int main(){
//     char grade[5] = 'A+';
//     printf("Grade = %s", grade);
// }

// WAP to find an average of 3 numbers.
// #include<stdio.h>
// int main(){
//     int num1, num2, num3;
//     float average;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);
//     average = (num1 + num2 + num3) / 3.0;
//     printf("The average of %d, %d and %d is %.2f\n", num1, num2, num3, average);
//     return 0;
// }

// WAP to take inoput and find multication of two numbers.
// #include<stdio.h>
// int main(){
//     int num1, num2, product;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     product = num1 * num2;
//     printf("The product of %d and %d is %d\n", num1, num2, product);
//     return 0;
// }   

// WAP to take input and find the area of rectangle.
// #include<stdio.h>
// int main(){
//     int length, width, area;
//     printf("Enter length and width of the rectangle: ");
//     scanf("%d %d", &length, &width);
//     area = length * width;
//     printf("The area of the rectangle is %d\n", area);
//     return 0;
// }

// WAP to take imput and make a calculator to find the sum, difference, product and quotient of two numbers.
// #include<stdio.h>
// int main(){
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     printf("Sum: %d\n", num1 + num2);
//     printf("Difference: %d\n", num1 - num2);
//     printf("Product: %d\n", num1 * num2);
//     if (num2 != 0) {
//         printf("Quotient: %.2f\n", (float)num1 / num2);
//     } else {
//         printf("Quotient: Undefined (division by zero)\n");
//     }
//     printf("Remainder: %d\n", num1 % num2);
//     return 0;
// }

// WAP to take input and find the square root of a number.
// #include<stdio.h>
// #include<math.h> 
// int main(){
//     double num, squareRoot;
//     printf("Enter a number: ");
//     scanf("%lf", &num);
//     if (num < 0) {
//         printf("Square root of negative number is undefined in real numbers.\n");
//     } else {
//         squareRoot = sqrt(num);
//         printf("The square root of %.2f is %.2f\n", num, squareRoot);
//     }
//     return 0;
// }