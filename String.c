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
#include<stdio.h>
int main(){
    char emoji[] = "\U0001F600";
    printf("Emoji code is: %s\n", emoji);
    return 0;
}

// WAP to input full name and print welcome "full name".
/* #include<stdio.h>
int main(){
    char name[100];
    printf("Enter your full name: ");
    scanf("%s", &name);
    printf("Welcome %s\n", name);
    return 0;
} */