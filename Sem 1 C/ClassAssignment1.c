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