#include <stdio.h>

// Function to print odd numbers from 1 to 50
void printOddNumbers() {
    printf("The odd numbers from 1 to 50 are:\n");
    for(int number = 1; number <= 50; number += 2) {
        printf("%d\t", number);
    }
    printf("\n");
}

// Function to calculate sum of even numbers from 1 to n
void sumEvenNumbers() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
    }
    printf("The sum of even numbers from 1 to %d is: %d\n", n, sum);
}

// Function to count digits in a number
void countDigits() {
    int number, count = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number == 0) {
        count = 1;
    } else {
        int temp = number;
        while(temp != 0) {
            temp = temp / 10;
            count++;
        }
    }
    printf("Number of digits: %d\n", count);
}

// Function to check if a number is prime
void checkPrime() {
    int number, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number <= 1) {
        isPrime = 0;
    } else {
        for(int i = 2; i < number; i++) {
            if(number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if(isPrime == 0) {
        printf("%d is not a prime number.\n", number);
    } else {
        printf("%d is a prime number.\n", number);
    }
}

// Function to print all prime numbers up to n
void printPrimesUpToN() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Prime numbers up to %d:\n", number);
    for(int i = 2; i <= number; i++) {
        int isPrime = 1;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1) {
            printf("%d\t", i);
        }
    }
    printf("\n");
}

// Function to check if a number is palindrome
void checkPalindrome() {
    int number, original, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);
    original = number;
    while(number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }
    if(original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }
}

// Function to print star pattern
void printStarPattern() {
    int n = 4;
    printf("Star Pattern:\n");
    for(int i = n; i >= 1; i--) {
        for(int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for(int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print odd number pattern
void printOddNumberPattern() {
    int n = 4;
    printf("Odd Number Pattern:\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", 2 * i - 1);
        }
        printf("\n");
    }
}

// Function to print number pyramid pattern
void printNumberPyramid() {
    int n = 4;
    printf("Number Pyramid Pattern:\n");
    for(int i = 1; i <= n; i++) {
        for(int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for(int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    printf("Welcome to LapReport3 Programs\n");
    printf("Choose a program to run:\n");
    printf("1. Print odd numbers from 1 to 50\n");
    printf("2. Calculate sum of even numbers from 1 to n\n");
    printf("3. Count digits in a number\n");
    printf("4. Check if a number is prime\n");
    printf("5. Print all prime numbers up to n\n");
    printf("6. Check if a number is palindrome\n");
    printf("7. Print star pattern\n");
    printf("8. Print odd number pattern\n");
    printf("9. Print number pyramid pattern\n");
    printf("Enter your choice (1-9): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printOddNumbers();
            break;
        case 2:
            sumEvenNumbers();
            break;
        case 3:
            countDigits();
            break;
        case 4:
            checkPrime();
            break;
        case 5:
            printPrimesUpToN();
            break;
        case 6:
            checkPalindrome();
            break;
        case 7:
            printStarPattern();
            break;
        case 8:
            printOddNumberPattern();
            break;
        case 9:
            printNumberPyramid();
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}