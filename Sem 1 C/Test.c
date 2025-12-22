#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main(){
//    char string[] = "hello world";
//    strupr(string);
//    printf("Uppercase string: %s\n", string);  
    // printf("Uppercase string: %s\n",);

    // float num = 9.98;
    // printf("Original number: %.2f\n", num);
    // printf("Rounded number: %.0f\n", round(num));
    // printf("Ceiling number: %.0f\n", ceil(num));
    // printf("Floor number: %.0f\n", floor(num));

    // WAP to strupr the whole string.
    // char str[] = "hello world";
    // for(int i = 0; str[i] != '\0'; i++) {
    //     if(str[i] >= 'a' && str[i] <= 'z') {    
    //         str[i] = str[i] - ('a' - 'A'); 
    //     }
    // }
    // printf("Uppercase string: %s\n", str);

    // WAP to strupr using strupr function.
    char str[100] = "hello world";
    toupper(str); 
    // // Demonstrating character input and output
    // char ch;
    // printf("Enter a character : ");
    // ch = getchar();
    // printf("The character you entered is : ");
    // putchar(ch);
    // printf("\n");

    // // Clear the input buffer before reading a string
    // while ((getchar()) != '\n');

    // // Demonstrating string input and output
    // char string[100];
    // printf("Enter a string : ");
    // scanf("%s", string);
    // printf("The string you entered is %s\n", string);

    return 0;
}
    