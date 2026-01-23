// WAP to input a word and reverse it using string function.
/* #include<stdio.h>
#include<string.h>
int main(){
    char str[100], rev[100];
    printf("Enter a word : ");
    scanf("%s", str);
    int len = strlen(str);     // Use strrev() function to reverse string. VS Code does not support strrev() function.
    for(int i = 0; i < len; i++){
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("The reversed word is : %s\n", rev);
    return 0;
} */

// WAP to input a word and check the frequency of words present in it.
/* #include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a word : ");
    scanf("%s", str);
    int freq = strlen(str);
    printf("The frequency of characters in the word is : %d\n", freq);
    return 0;
} */

// WAP to input a string and count the number of vowels and consonants present in it.
/* #include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int vowels = 0, consonants = 0;
    printf("Enter a string : ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++){
        char ch = str[i];
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                vowels++;
            } else {
                consonants++;
            }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);  
    return 0;
} */

// WAP to input and check whether the given string is palindrome or not.
/* #include<stdio.h>
#include<string.h>
int main(){
    char str[100], rev[100];
    printf("Enter a string : ");
    scanf("%s", str);
    int len = strlen(str);
    for(int i = 0; i < len; i++){ // use strrev() function to reverse string. VS Code does not support strrev() function.
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    if(strcmp(str, rev) == 0){
        printf("The given string is a palindrome.\n");
    } else {
        printf("The given string is not a palindrome.\n");
    }
    return 0;
} */

// WAP to input 5 city names and sort them in ascending order.(Lexicographical Order)
/* #include<stdio.h>
#include<string.h>
int main(){
    char cities[5][100], temp[100];
    printf("Enter 5 city names : \n");
    for(int i = 0; i < 5; i++){
        scanf("%s", cities[i]);
    }
    for(int i = 0; i < 5 - 1; i++){
        for(int j = i + 1; j < 5; j++){
            if(strcmp(cities[i], cities[j]) > 0){
                strcpy(temp, cities[i]);
                strcpy(cities[i], cities[j]);
                strcpy(cities[j], temp);
            }
        }
    }
    printf("City names in ascending order:\n");
    for(int i = 0; i < 5; i++){
        printf("%s\n", cities[i]);
    }
    return 0;
} */

// WAP to explain the concept of buffer overflow using gets() and fgets() functions.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[10];
    char str2[10];
    printf("Enter a string for gets() (max 9 characters): ");
    gets(str1); // Unsafe, can cause buffer overflow
    printf("You entered: %s\n", str1);
    printf("Enter a string for fgets() (max 9 characters): ");
    fgets(str2, sizeof(str2), stdin); // Safe, prevents buffer overflow
    printf("You entered: %s\n", str2);
    return 0;
}