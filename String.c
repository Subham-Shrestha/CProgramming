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
#include<stdio.h>
int main(){
    char name[50] = "Ram";
    int i = 0;
    printf("Welcome ");
    while(name[i] != '\0'){
        printf("%c", name[i]);
        i++;
    }
    printf("\n");
    return 0;
}

// 