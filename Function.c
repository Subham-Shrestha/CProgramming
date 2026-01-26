// WAP a program to print hello world inside a print_hello funciton.
/* #include<stdio.h>
#include<string.h>
void print_hello(){
    printf("Hello World\n");
}
int main(){
    print_hello();
    retunrn 0;
} */

// WAP to print numbers from 1 to 10 inside print_number() function.
/* #include<stdio.h>
void print_number(){
    for(int i = 1; i <= 10; i++){
        printf("%d ", i);
    }
}
int main(){
    print_number();
    return 0;
} */

// WAP to add two numbers inside a function add_num.
//   #include<stdio.h>
// void add_num(int num1/* parameter */, int num2 /* parameter */ /*, int add */){
//     int add = num1 + num2;   /* declaring add because it is not being declared anywhere including the parameters. */
//     printf("The sum is : %d\n", add);
// }
// int main(){
//     // printf("Enter num1 and num2 separated by space : ");
//     // scanf("%d %d", &num1, &num2);
//     // add_num(num1, num2, add);
//     add_num(5, 10); /* argument */
//     add_num(2,3); /* argument */
//     return 0;
// } 

// wAP to add, subtract, multiply, divison of 2 numbers inside
/* #include<stdio.h>
void add_num(float num1, float num2){
    float sum = num1 + num2;
    printf("The sum is : %.2f\n", sum);
}
void sub_num(float num1, float num2){
    float sub = num1 - num2;
    printf("The difference is : %.2f\n", sub);
}
void mul_num(float num1, float num2){
    float mul = num1 * num2;
    printf("The product is : %.2f\n", mul);
}
void div_num(float num1, float num2){
    if(num1 < num2){
        printf("Division by 0 equals infinity.");
    }else{
        float div = num1 / num2;
        printf("The division is : %.2f\n", div);
    }
}
int main(){
    float num1, num2;
    printf("Enter num1 and num2 separated by space : ");
    scanf("%f %f", &num1, &num2);
    add_num(num1, num2);
    sub_num(num1, num2);
    mul_num(num1, num2);
    div_num(num1, num2);
    return 0;
} */

// WAP without argument and with return type funciton.
/* #include<stdio.h>
int hello(){
    char num2 = 'a';
    printf("Hello World.\n");
    return num2;
}
int main(){
    char num = hello();
    printf("Returned value = %c\n", num);
} */

/* #include<stdio.h>
#include<time.h>
int main(){
    printf("Time in millisecond = %d", time(0));
} */

/* #include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generate_password(){
    srand(time(0));
    int password = rand()%9000+1000;;
    return password;
}
int main(){
    int pass = generate_password();
    printf("Suggented password = %d", pass);
} */

/* #include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generate_pin(){
    int password;
    srand(time(0));
    password = rand()%7;
    return password;
}
int main(){
    int pass = generate_pin();
    printf("The pin is : %d", pass);
} */

/* #include<stdio.h>
int add_num(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}
int main(){
    int total = add_num(2,3);
    printf("Sum = %d\n", total);
    int new_value = total *2;
    printf("After multiplying = %d\n", new_value);
} */

/* #include<stdio.h>
int calculate_salary(int days){
    int salary = 1000 * days;
    return salary;
}
int main(){
    int gross_salary = calculate_salary(25);
    printf("Gross salary : %d\n", gross_salary);
    int tax = gross_salary *0.1;
    printf("Tax amount : %d\n", tax);
    int net_salary = gross_salary - tax;
    printf("Net salary = %d",net_salary);
} */

// WAP to input a number and print that number inside a function.
/* #include<stdio.h>
int print_num(int a){
    printf("The number you entered is : %d\n", a);
    return a;
}
int main(){
    int num;
    printf("Enter a numebr : ");
    scanf("%d", &num);
    print_num(num);
} */

// WAP to input a number and find it's square and cube value inside two different functions.
/* #include<stdio.h>
int square(int sqnum){
    int sqd = sqnum * sqnum;
    printf("The square of the number %d is : %d\n", sqnum, sqd);
    return sqd;
}
int cube(int cubnum){
    int cub = cubnum * cubnum * cubnum;
    printf("The cube of the number %d is : %d\n", cubnum, cub);
    return cub;
}
int main(){
    int num, num2;
    printf("Enter a number to find it's square and cube : ");
    scanf("%d", &num);
    printf("Enter cube number : ");
    scanf("%d", &num2);
    square(num);
    cube(num2);
    return 0;
} */

// WAP to input a number and check if it is palinderom or not inide a unction.
/* #include<stdio.h>
int check_palindrome(int num){
    int originalNum = num;
    int reversedNum = 0;
    while(num != 0){
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    if(originalNum == reversedNum){
        printf("The number %d is a palindrome.\n", originalNum);
    }else{
        printf("The number %d is not a palindrome.\n", originalNum);
    }
    return 0;
}
int main(){
    int num;
    printf("Enter a number to check palindrom condition : ");
    scanf("%d", &num);
    check_palindrome(num);
    return 0;
} */

// wAP to create an array of size 5 and find their whole sum inside a function.
/* #include<stdio.h>
int sum(int num_arr[5]){
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum = sum + num_arr[i];
    }
    return sum;
}
int main(){
    int num[5], add;
    printf("Enter the numbers : \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }
    add = sum(num);
    printf("The sum is : %d", add);
    return 0;
} */

// WAP to input two numbers and a character. Then perform add, sub, multiply, divide making all functions and perform calculation inside a function calculation().
/* #include<stdio.h>
void add(float num1, float num2){
    float sum = num1 + num2;
    printf("The sum is : %.2f\n", sum);
}
void sub(float num1, float num2){
    float difference = num1 - num2;
    printf("The difference is : %.2f\n", difference);
}
void mul(float num1, float num2){
    float product = num1 * num2;
    printf("The product is : %.2f\n", product);
}
void div(float num1, float num2){
    if(num2 == 0){
        printf("Division by zero is not allowed.\n");
    }else{
        float division = num1 / num2;
        printf("The division is : %.2f\n", division);
    }
}
void calculation(float num1, float num2, char operator){
    switch(operator){
        case '+':
            add(num1, num2);
            break;
        case '-':
            sub(num1, num2);
            break;
        case '*':
            mul(num1, num2);
            break;
        case '/':
            div(num1, num2);
            break;
        default:
            printf("Invalid operator.\n");
    }
}
int main(){
    float num1, num2;
    char operator;
    printf("Enter two numbers separated by space : ");
    scanf("%f %f", &num1, &num2);
    printf("Enter an operator (+, -, *, /) : ");
    scanf(" %c", &operator);
    calculation(num1, num2, operator);
    return 0;
} */

// WAP to demonstrate local and global variable. (Used in tax calculation).
/* #include<stdio.h>
#include<string.h>
int b = 10;
void display(){
    int a = 5;
    printf("inside function a = %d\n", a);
    printf("inside b = %d\n", b);
}
int main(){
    display();
    printf("b = %d", b);
    return 0;
} */

// #include<stdio.h>
// void display(){
//     int count = 0;
//     count ++;
//     printf("Count value = %d\n", count);
// }
// int main(){
//     display();
//     display();
//     display();
//     return 0;
// }

// #include<stdio.h>
// void display(){
//     static int count = 0;
//     count ++;
//     printf("Count value = %d\n", count);
// }
// int main(){
//     display();
//     display();
//     display();
//     return 0;
// }

// #include<stdio.h>
// void display(){
//     register int count = 0;
//     printf("Count value = %d\n", count);
// }
// int main(){
//     display();
//     return 0;
// }

/* #include<stdio.h>
void display(){
    auto int count = 0;
    printf("Count value = %d\n", count);
}
int main(){
    display();
    return 0;
} */

// WAP to print numbers from 1 to 5 using recursion.
/* #include<stdio.h>
void print_num(int n){
    if(n > 5){
        return;
    }else{
        printf("%d ", n);
        print_num(n+1);
    }
}
int main(){
    print_num(1);
    return 0;
} */

// WAP to print numbers from 5 to 1 using recursion.
/* #include<stdio.h>
void print_num(int n){
    if(n < 1){
        return;
    }
    else{
        printf("%d ", n);
        print_num(n-1);
    }
}
int main(){
    print_num(5);
    return 0;
} */

// WAP to print numbers from n to 1 using recursion.
/* #include<stdio.h>
void print_num(int n){
    if(n < 1){
        return;
    }
    else{
        printf("%d ", n);
        print_num(n-1);
    }
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    print_num(num);
    return 0;
} */

// WAP to print numbers from 1 to n using recursion.
/* #include<stdio.h>
void print_num(int n){
    if(n < 1){
        return;
    }
    else{
        print_num(n-1);
        printf("%d ", n);
    }
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    print_num(num);
    return 0;
} */

// WAP to inpujt and find factorial of the number using recursion.
#include<stdio.h>
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}
int main(){
    int num;
    printf("Enter a number to find its factorial : ");
    scanf("%d", &num);
    int fact = factorial(num);
    printf("The factorial of %d is : %d\n", num, fact);
    return 0;
}