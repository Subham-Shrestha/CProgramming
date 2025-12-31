// WAP to print all the odd numbers from 1 - 50.
/* #include <stdio.h>
int main(){
    int number;
    printf("The odd numbers from 1 to 50 are : \n");
    for(number = 1; number <= 50; number+=2){
        printf("%d\t", number);
    }  
    return 0;
} */

// WAP to take input value of n and 1 to n and their sum.
/* #include <stdio.h>
int main(){
    int n;
    int sum = 0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }
    printf("The sum of even numbers from 1 to %d is : %d\n", n, sum);
    return 0;
} */

// WAP to take input and count the number of digits in that number.
/* #include<stdio.h>
int main(){
    int number;
    int count = 0;
    printf("Enter a number : \n");
    scanf("%d", &number);
    if(number == 0){
        count = 1;
    }else{
        while(number != 0){
            number = number / 10;
            count++;
        }
    }
    printf("Number of digits : %d\n", count);
    return 0;
} */

// WAP to input a number and check whether it is prime or not.
/* #include<stdio.h>
int main(){
    int number;
    printf("Enter a number : \n");
    scanf("%d", &number);
    int isPrime = 1;
    if(number <= 1){
        isPrime = 0;
    }else{
        for(int i = 2; i < number; i++){
            if(number % i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime == 0){
        printf("%d is not a prime number.\n", number);
    }else{
        printf("%d is a prime number.\n", number);
    }
    return 0;
} */

// WAP to print all prime numbers up to n.
/* #include<stdio.h>
int main(){
    int number;
    printf("Enter a number : \n");
    scanf("%d", &number);
    printf("Prime numbers up to %d:\n", number);
    for(int i = 2; i <= number; i++){
        int isPrime = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
} */

// WAP to check if a number is palindrome.
/* #include<stdio.h>
int main(){
    int number, original, reversed = 0, remainder;
    printf("Enter a number : \n");
    scanf("%d", &number);
    original = number;
    while(number != 0){
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }
    if(original == reversed){
        printf("%d is a palindrome number.\n", original);
    }else{
        printf("%d is not a palindrome number.\n", original);
    }
    return 0;
} */

// WAP to print star pattern.
/* #include<stdio.h>
int main(){
    int n = 4;
    printf("Star Pattern:\n");
    for(int i = n; i >= 1; i--){
        for(int space = 1; space <= n - i; space++){
            printf(" ");
        }
        for(int j = 1; j <= (2 * i - 1); j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} */

// WAP to print odd number pattern.
/* #include<stdio.h>
int main(){
    int n = 4;
    printf("Odd Number Pattern:\n");
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", 2 * i - 1);
        }
        printf("\n");
    }
    return 0;
} */

// WAP to print number pyramid pattern.
/* #include<stdio.h>
int main(){
    int n = 4;
    printf("Number Pyramid Pattern:\n");
    for(int i = 1; i <= n; i++){
        for(int space = 1; space <= n - i; space++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        for(int j = i - 1; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
} */