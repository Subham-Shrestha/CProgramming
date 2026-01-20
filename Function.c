// WAP a program to print hello world inside a print_hello funciton.
/* #include<stdio.h>
#include<string.h>
void print_hello(){
    printf("Hello World\n");
}
int main(){
    print_hello();
    retunrn 0;
} */

// WAP to print numbers from 1 to 10 inside print_number() function.
#include<stdio.h>
void print_number(){
    for(int i = 1; i <= 10; i++){
        printf("%d ", i);
    }
}
int main(){
    print_number();
    return 0;
}
