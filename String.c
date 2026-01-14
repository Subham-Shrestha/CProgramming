// String Input and Output in C
/* #include<stdio.h>
int main(){
    char string[100];
    printf("Enter a string : ");
    scanf("%s", &string);
    printf("The string you entered is %s\n", string);
    return 0;
}*/

// String test.
/*#include<stdio.h>
int main(){
    char ch ='a';
    char st[5]="a";
    if(ch == st[0]){
        printf("Same");
    }else{
        printf("Not Same");
    }
}*/ //Shows error because we cannot compare a character with a string directly in C.

// WAP to input name and print welcome "name".
/* #include<stdio.h>
int main(){
    char name[50];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Welcome %s\n", name);
    return 0;
} */

// WAP to input name and print welcome "name" without using %s.
/* #include<stdio.h>
int main(){
    char name[50] = "Subham";
    int i = 0;
    printf("Welcome ");
    while(name[i] != '\0'){
        printf("%c", name[i]);
        i++;
    }
    return 0;
} */

// WAP to check the charater numbers in a string.
/* #include<stdio.h>
int main(){
    char string[100];
    int i = 0, count = 0;
    printf("Enter a name: ");
    scanf("%s", &string);  //& shows error here but works fine.
    while(string[i] != '\0'){
        count++;
        i++;
    }
    printf("Number of letter is: %d\n", count);
    return 0;
} */

// WAP to create emoji code using emoji.
/* #include<stdio.h>
int main(){
    char emoji[] = "\U0001F642";
    printf("%s\n", emoji);
    return 0;
} */

// WAP to input full name and print welcome "full name".
/* #include<stdio.h>
int main(){
    char name[563748];
    printf("Enter your full name: ");
    fgets(name,sizeof(name),stdin);
    printf("Welcome ");
    fputs(name, stdout);
    return 0;
} */

// WAP to reverse a string and display it.
/* #include<stdio.h>
int main(){
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    int i = 0, count = 0;
    while(name[i] != '\0'){
        count++;
        i++;
    }
    printf("Reversed is : ");
    for(i = count - 1; i>=0; i--){
        printf("%c\t", name[i]);
        // printf("%d\n", name[i]);
    }
    // char asc[] = "K";
    // printf("\n%d", asc[0]);
} */

// WAP to checj uf two strings are same or not.
/* #include<stdio.h>
int main(){
    char name1[50], name2[50];
    printf("Enter first name and second name : ");
    scanf("%s %s", name1, name2);
    if(name1 == name2){
        printf("Same\n");
    }else{
        printf("Same Same but different.\n");
    }
    printf("Memory of n1 : %d\n", name1);
    printf("Memory of n2 : %d\n", name2);
    return 0;
} */

// WAP to convert a string to uppercase
/* #include<stdio.h>
int main(){
    char name[50] = "Ram", ucase[50];
    int i = 0;
    printf("ASCII value of R = %d\n", name[0]);
    printf("ASCII value of a = %d\n", name[1]);
    printf("ASCII value of m = %d\n", name[2]);
    while(name[i]!='\0'){
        printf("ASCII value of the name = %d\n", name[i]);
        i++;
    }
    int j = 0;
    while(name[j] != '\0'){
        if(name[i]>= 'a' && name[i]>= 'z'){
            ucase[j] = name[j] - 32;
            printf("Uppercase = %c \n", ucase[j]);
            printf("ASCII value of upper case = %d\n", ucase[j]);
        }
        j++;
    }
    return 0;
} */

// WAP to uppercase string using the prebuilt function.
/* #include<stdio.h>
#include<string.h>
int main(){
    char name[50] = "Ram";
    strupr(name);
    printf("Upper case : %s \n", name);
} */

// WAP to calculate the length of string
/* #include<stdio.h>
#include<string.h>
int main(){
    char name[50] = "Ram";
    int length = strlen(name);
    printf("%d", length);
} */

// WAP to reverse string.
/* #include<stdio.h>
#include<string.h>
int main(){
    char name[50] = "Ram";
    strrev(name);
    printf("Reverse = %s", name);
} */
