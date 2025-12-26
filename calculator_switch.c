// #include <stdio.h>

// int main(){
//     float num1 = 10.0;
//     float num2 = 5.0; 
//     char operator;
//     float result;
//     printf("Enter an arithmetic operator (+, -, *, /): ");
//     scanf(" %c", &operator);
//     switch(operator){
//         case '+':
//             result = num1 + num2;
//             printf("Result: %.2f\n", result);
//             break;
//         case '-':
//             result = num1 - num2;
//             printf("Result: %.2f\n", result);
//             break;
//         case '*':
//             result = num1 * num2;
//             printf("Result: %.2f\n", result);
//             break;
//         case '/':
//             if(num2 != 0){
//                 result = num1 / num2;
//                 printf("Result: %.2f\n", result);
//             }else{
//                 printf("Error: Division by zero is not allowed.\n");
//             }
//             break;
//         default:
//             printf("Invalid operator! Please use one of +, -, *, /.\n");
//             break;
//     }
//     return 0;
// }