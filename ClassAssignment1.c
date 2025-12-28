// WAP to input a number and check whether it is even or odd.
/* #include <stdio.h>
int main(){
    int number;
    printf("Enter a number : \n");
    scanf("%d", &number);
    if(number %2 == 0){
        printf("%d is an even number. \n", number);
    }else{
        printf("%d is an odd number \n",number);
    }
    return 0;
} */

// WAP to check if a number is multiple of 5 or not.
/* #include<stdio.h>
int main(){
    int number;
    printf("Enter a number : \n");
    scanf("%d", &number);
    if(number % 5 ==0){
        printf("%d is a multiple of 5. \n", number);
    }else{
        printf("%d is not a multiple of 5. \n", number);
    return 0;
    }
} */

// WAP to check if a number is multiple of 2 and 3 or not.
/* #include<stdio.h>
int main(){
    int number;
    printf("Enter a number : \n");
    scanf("%d", &number);
    if(number % 2 ==0 && number % 3 ==0){
        printf("%d is a multiple of 2 and 3. \n", number);
    }else{
        printf("%d is not a multiple of 2 and 3. \n", number);
    }
    return 0;
} */

// WAP to check if a number is positive, negative or zero
/* #include<stdio.h>
int main(){
    int number;
    printf("Enter a number : \n");
    scanf("%d", &number);
    if(number > 0){
        printf("%d is a positive number. \n", number);
    }else if(number < 0){
        printf("%d is a negative number. \n", number);
    }else{
        printf("The number is zero. \n");
    }
    return 0;
} */

// WAP to input a character and check whether it is vowel or consonant.
/* #include<stdio.h>
int main(){
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
       character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U'){
        printf("%c is a vowel.\n", character);
    }else{
        printf("%c is a consonant.\n", character);
    }
    return 0;
} */

// WAP to check if the user input is alphabet, digit or special character.
/* #include<stdio.h>
int main(){
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
        printf("%c is an alphabet.\n", character);
    }else if(character >= '0' && character <= '9'){
        printf("%c is a digit.\n", character);
    }else{
        printf("%c is a special character.\n", character);
    }
    return 0;
} */

// WAP to input 3 numbers and find the largest number among them.
/* #include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 >= num2 && num1 >= num3){
        printf("%d is the largest number.\n", num1);
    }else if(num2 >= num1 && num2 >= num3){
        printf("%d is the largest number.\n", num2);
    }else{
        printf("%d is the largest number.\n", num3);
    }
    return 0;
} */

// WAP to take input of a student of CSIT - I sem marks on 3 subjects and calculate his/her total_marks, percentage, grade, result(pass/fail).
/* #include <stdio.h>
int main()
{
    float mk1, mk2, mk3, percentage;
    printf("Enter marks of 3 subjects : \n");
    scanf("%f %f %f", &mk1, &mk2, &mk3);
    if (mk1 >= 24 || mk2 >= 24 || mk3 >= 24){
        if (percentage >= 90)
        {
            printf("grade = 'A+'\n");
        }
        else if (percentage >= 80)
        {
            printf("grade = 'A'\n");
        }
        else if (percentage >= 70)
        {
            printf("grade = 'B+'\n");
        }
        else if (percentage >= 60)
        {
            printf("grade = 'B'\n");
        }
        else if (percentage >= 50)
        {
            printf("grade = 'C+'\n");
        }
        else
        {
            printf("grade = 'Fail'\n");
        }
    }
    else
    {
        printf("Student has failed. \n");
    }
    float total_marks = mk1 + mk2 + mk3;
    percentage = (total_marks / 180) * 100;
    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f\n", percentage);
    return 0;
} */

// WAP to take input of electricity unit and calculate the total bill amount to pay.
/* Unit     Charge
   0-50----> 10
   51-150--> 11
   151-250-> 12
   Above 250-> 15*/
/* #include <stdio.h>
int main()
{
    int units;
    float bill_amount;
    printf("Enter the number of electricity units consumed: \n");
    scanf("%d", &units);
    if (units <= 50)
    {
        bill_amount = units * 10;
    }
    else if (units <= 150)
    {
        bill_amount = (50 * 10) + ((units - 50) * 11);
    }
    else if (units <= 250)
    {
        bill_amount = (50 * 10) + (100 * 11) + ((units - 150) * 12);
    }
    else
    {
        bill_amount = (50 * 10) + (100 * 11) + (100 * 12) + ((units - 250) * 15);
    }
    printf("Total bill amount to pay: %.2f\n", bill_amount);
    return 0;
} */

// WAP to print day according to the number entered by the user.
/* #include <stdio.h>
int main(){
    int dayNum;
    printf("Enter a number (1-7): \n");
    scanf("%d", &dayNum);
    switch(dayNum){
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day! Please enter a day between 1 and 7.\n");
            break;
    }
    return 0;
} */

// WAP to enter a value (1-4) and print its related string value.
/* #include<stdio.h>
int main(){
    int num;
    printf("Enter a number (1-4): \n");
    scanf("%d", &num);
    switch(num){
        case 1 :
            printf("One\n");
            break;
        case 2 :
            printf("Two\n");
            break;
        case 3 :
            printf("Three\n");  
            break;
        case 4 : 
            printf("Four\n");
            break;
        default : 
            printf("Brother just enter number between 1 - 4.\n");
            break;
    }
    return 0;
} */

// WAP to declare constant of 2 variables and take input symbol of arithmetic operation and perform operation accordingly.
/* #include <stdio.h>
int main(){
    float num1 = 10.0;
    float num2 = 5.0; 
    char op;
    float result;
    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf(" %c", &op);
    switch(op){
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            }else{
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use one of +, -, *, /.\n");
            break;
    }
    return 0;
} */

// WAP to print hello world 10 times.
/* #include <stdio.h>
int main(){
    printf("Hello Wordl\n");
    printf("Hello Wordl\n");
    printf("Hello Wordl\n");
    printf("Hello Wordl\n");
    printf("Hello Wordl\n");
    printf("Hello Wordl\n");
    printf("Hello Wordl\n");
    printf("Hello Wordl\n");
    printf("Hello Wordl\n");
    printf("Hello Wordl\n");
    return 0;
} */

// WAP to check odd from 1 - 20
/* #include <stdio.h>
int main(){
    int number;
    for(number = 1; number <= 20; number++){
        if(number % 2 != 0){
            printf("%d is odd\n", number);
        }
    }
    return 0;
} */

// WAP to add all numbers from 1 - 10.
/* #include <stdio.h>
int main(){
    int number;
    int sum = 0;
    for(number = 1; number <= 10; number++){
        sum += number;
    }
    printf("The sum of numbers from 1 to 10 is: %d\n", sum);
    return 0;
} */

// WAP to print your name 10 times.
/* #include <stdio.h>
int main(){
    for(int i = 1; i <= 10; i++){
        printf("%d Subham\n", i);
    }
    return 0;
} */

// WAP ro print numbers from (20 - 1).
/* #include <stdio.h>
int main(){
    printf("The numbers from 20 t o 1 are : \n");
    for(int i = 20; i >= 1; i--){
        printf("%d\n", i);
    }
    return 0;
} */

// WAP to print square of every numbers from 1 - 10.
/* #include <stdio.h>
int main(){
    for(int i = 1; i <= 10; i++){
        printf("Square of %d is %d\n", i, i * i);
    }
    return 0;
} */

// WAP to print even numbers and find their total sum of 1 - 20.
/* #include <stdio.h>
int main(){
    int sum = 0;
    printf("Even numbers from 1 to 20 are:\n");
    for(int i = 1; i <= 20; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
            sum += i;
        }
    }
    printf("The sum of even numbers from 1 to 20 is: %d\n", sum);
    return 0;
} */

// WAP to take input of a number and print i'ts multiplication table.
/* #include <stdio.h>
int main(){
    int number;
    printf("Enter a number to print its multiplication table: \n");
    scanf("%d", &number);
    printf("Multiplication table of %d:\n", number);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
} */

// WAP to input a number and find its factorial.
/* #include<stdio.h>
int main(){
    int number;
    int factorial = 1;
    printf("Enter a number : \n");
    scanf("%d", &number);
    for(int i = number; i>= 1; i--){
        factorial = factorial *i;
    }
    printf("Factorial : %d \n", factorial);
    return 0;
} */

// WAP to input a number and check whether it is prime or not.
/* #include<stdio.h>
int main(){
    int number;
    int isPrime = 1; 
    printf("Enter a number : \n");
    scanf("%d", &number);
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

// WAP just a test.
/* #include<stdio.h>
int main(){
    int number;
    printf("Enter a number : \n");
    scanf("%d", &number);
    for(int i = 1; i <= number; i*=4){
            printf("%d\n", i);
    }
    return 0;
} */

// WAP to reverse a number.
/* #include<stdio.h>
int main(){
    int number, reversed = 0, remainder;
    printf("Enter a number : \n");
    scanf("%d", &number);
    while(number != 0){
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }
    printf("Reversed Number : %d\n", reversed);
    return 0;
} */

// WAP to print odd number from 1 - 20 using continue statement.
/* #include<stdio.h>
int main(){
    int i;
    for(i = 1; i <= 20; i++){
        if(i % 2 == 0){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
} */

// WAP to present all 24 students and skipping roll 7 using continue statement.
/* #include<stdio.h>
int main(){
    int i;
    for(i = 1; i <= 24; i++){
        if(i == 7){
            continue;
        }
        printf("Roll Number: %d is present.\n", i);
    }
    return 0;
} */

// WAP to print the pattern without using nested loop.
/* ****
   ****
   **** */
/* #include<stdio.h>
int main(){
    int i;
    for(i = 1; i <= 3; i++){
        printf("*\t*\t*\t*\n");
    }
    return 0;
} */

// WAP to print the pattern using nested loop.
/* ****
    ****
    **** */
/* #include<stdio.h>
int main(){
    int i, j;
    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 4; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} */

// WAP to print the following pattern.
/* 1 2 3
    1 2 3
    1 2 3  */
/* #include<stdio.h>
int main(){
    int i, j;
    for(i = 1; i <= 3; i++){
        for(j = 1; j <= 3; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
} */

// WAP to print the pattern using nested loop.
/* *
   **
   ***
   **** */
/* #include<stdio.h>
int main(){
    int i, j;
    for(i = 1; i <= 4; i++){
        for(j = 1; j <= i; j++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
} */

// WAP to print the following pattern.
/* 1
   12
   123
   1234 */
/* #include<stdio.h>
int main(){
    int i, j;
    for(i = 1; i <= 4; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
} */

// WAP to print the following pattern.
/* *** 
   **
   * */
/* #include<stdio.h>
int main(){
    int i, j;
    for(i = 1; i <= 3; i++){
        for(j = 3; j >= i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} */

// WAP to make a pattern.
/* *
   **
   ***
   ****
   ***
   **
   * */
/* #include<stdio.h>
int main(){
    int i, j;
    for(i = 1; i <= 4; i++){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i = 3; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} */

/* 1
   12
   123
   1234 
   Sir detail explain that i = k. */
/* #include<stdio.h>
int main(){
    int i, j, k = 1;
    for(i = 1; i <= 4; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", j);
            k++;
        }
        printf("\n");
    }
    return 0;
} */

// WAP to make a nepal flag.
/* #include<stdio.h>
int main(){
    for(int i = 1; i<=4; i++){
        for(int j = 1; j<=i; j++){
            printf("* ");
        }
        printf("\n");   
    }
    for(int i = 1; i<=4; i++){
        for(int j = 1; j<=i; j++){
            printf("* ");
        }
        printf("\n");   
    }
    return 0;
} */

// WAP to print the following pattern.
/*   *
    * *
   * * *
  * * * * */
 /* #include<stdio.h>
 int main(){
    int i, j, space;
    for(i = 1; i <= 4; i++){
        for(space = 1; space <= 4 - i; space++){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
 } */

//  WAP to print the following pattern.
/* 1
   23
   456
   78910*/
// #include<stdio.h>
// int main(){
//     int i, j, k = 1;
//     for(i = 1; i <= 4; i++){
//         for(j = 1; j <= i; j++){
//             printf("%d ", k);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// } 

// WAP to print "Try again" until user types the correct digits by initializing the correct value.
/* #include<stdio.h>
int main(){
    int correct = 0, input;
    printf("Enter correct digit : ");
    scanf("%d", &input);
    do{
        if(input != 0){
            printf("Try again : ");
            scanf("%d", &input);
        }
        if(input == correct){
            printf("Correct digit.");
        }
    }while(input != 0);
    return 0;
} */

// WAP to check the correct pin by giving user to initialize it.
// #include<stdio.h>
// int main(){
//     int initialize, pin;
//     printf("Enter a pin to initialize : ");
//     scanf("%d", &initialize);
    
// }

// WAP to take a number and print it's reverse value.
/* #include<stdio.h>
int main(){
    int num, reverse = 0, remainder;
    printf("Enter a number : ");    
    scanf("%d", &num);
    while(num != 0){
        remainder = num %10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Reverse value : %d", reverse);
    return 0;
} */
// Do-while loop to print reverse of a number.
#include<stdio.h>
int main(){
    int num, reverse = 0, remainder;
    printf("Enter a number : ");
    scanf("%d", &num);
    do{
        remainder = num %10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }while(num != 0);
    printf("Reverse value : %d", reverse);
    return 0;
}

// This is something that I am checking.