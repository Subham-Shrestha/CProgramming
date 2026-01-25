// WAP to check whether a number is even or odd using function.
/* #include<stdio.h>
void check_even_odd(int num){
    if(num % 2 == 0){
        printf("The number %d is even.\n", num);
    }else{
        printf("The number %d is odd.\n", num);
    }
}
int main(){
    int number;
    printf("Enter a number to check even or odd : ");
    scanf("%d", &number);
    check_even_odd(number);
    return 0;
} */

// WAP to inpuit a number and print its factorial inside a function.
/* #include<stdio.h>
void factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    printf("The factorial of %d is : %d\n", num, fact);
}
int main(){
    int number;
    printf("Enter a number to find its factorial : ");
    scanf("%d", &number);
    factorial(number);
    return 0;
} */

// WAP to check whether a number is prime or not using function.
/* #include<stdio.h>
void check_prime(int num){
    int isPrime = 1;
    if(num <= 1){
        isPrime = 0; 
    }else{
        for(int i = 2; i <= num / 2; i++){
            if(num % i == 0){
                isPrime = 0; 
                break;
            }
        }
    }
    if(isPrime){
        printf("The number %d is prime.\n", num);
    }else{
        printf("The number %d is not prime.\n", num);
    }
}
int main(){
    int number;
    printf("Enter a number to check prime or not : ");
    scanf("%d", &number);
    check_prime(number);
    return 0;
} */

// WAP to find the maximum of three numbers using a function.
/* #include<stdio.h>
void max(int num1, int num2, int num3){
    if(num1 > num2 && num1 > num3){
        printf("%d is the greatest number.", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("%d is the greatest number.", num2);
    }else{
        printf("%d is the greatest number.", num3);
    }
}
int main(){
    int num1, num2, num3;
    printf("Enter three numbers separated by spaces : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    max(num1, num2, num3);
    return 0;
} */

// WAP to generate a random 4-digit password using function.
/* #include<stdio.h>
#include<stdlib.h>
#include<time.h>
int ran(){
    int password;
    srand(time(0));
    password = rand()%9000+1000;
    return password;
}
int main(){
    int pass = ran();
    printf("The pin is : %d\n", pass);
} */