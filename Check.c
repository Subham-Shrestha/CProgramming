// WAP to use switch case and perform arithmetic operations.
#include <stdio.h>
int main(){
    float num1;
    float num2; 
    char op;
    float result;
    printf("Enter two numbers: \n");
    scanf("%f %f", &num1, &num2);
    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf(" %c", &op);
    switch(op){
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result : %.2f\n", result);
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
                printf("Something by zero is infinity.\n");
            }
            break;
        case '%':
            result = (int)num1 % (int)num2;
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid operator! Please use one of +, -, *, /.\n");
            break;
    }
    return 0;
}