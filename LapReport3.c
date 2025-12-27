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

// WAP to take input value iof n and 1 to n and their sum.
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
    int ifPrime = 1; 
    printf("Enter a number : \n");
    scanf("%d", &number);
    if(number <= 1){
        ifPrime = 0; 
    }else{
        for(int i = 2; i < number; i++){
            if(number % i == 0){
                ifPrime = 0;
                break;
            }
        }
    }
    if(ifPrime == 0){
        printf("%d is not a prime number.\n", number);
    }else{
        printf("%d is a prime number.\n", number);
    }
    return 0;
} */

// WAP to input a number and print all prime numbers up to that number.
/* #include<stdio.h>
int main(){
    int number, i, j, ifPrime;
    printf("Enter a number : \n");
    scanf("%d", &number);
    printf("Prime numbers up to %d are : \n", number);
    for(i = 2; i <= number; i++){
        ifPrime = 1;
        for(j = 2; j <= i / 2; j++){
            if(i % j == 0){
                ifPrime = 0;
                break;
            }
        }
        if(ifPrime == 1){
            printf("%d\t", i);
        }
    }  
    return 0;
} */

// WAP to take input and check whether the number is palindrome or not using while loop.
/* #include<stdio.h>
int main(){
    int number, Number, reversed = 0, remainder;
    printf("Enter a number : \n");
    scanf("%d", &number);
    Number = number;
    while(number != 0){
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }
    if(Number == reversed){
        printf("%d is a palindrome number.\n", Number);
    }else{
        printf("%d is not a palindrome number.\n", Number);
    }
    return 0;
} */

// Print the pattern.
/* * * * * * 
  * * * * *
    * * *
      * */
/* #include<stdio.h>
int main(){
    int i, j, n = 5;
    for(i = n; i >= 1; i--){
        for(j = n; j > i; j--){
            printf("  ");
        }
        for(j = 1; j <= (2 * i - 1); j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} */

/* 1
   33
   555 
   7777*/
/* #include<stdio.h>
int main(){
    int i, j, n = 4;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", 2 * i - 1);
        }
        printf("\n");
    }
    return 0;
} */

/*    1
    1 2 1
   1 2 3 2 1
 1 2 3 4 3 2 1 */ 
/* #include<stdio.h>
int main(){
    int i, j, space, n = 4;
    for(i = 1; i <= n; i++){
        for(space = 1; space <= n - i; space++){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        for(j = i - 1; j >= 1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
} */