/* #include<stdio.h>
int main(){
    int a = 10;
    printf("Value = %d\n", a);
    printf("Address = %p\n", &a);
    return 0;
} */

/* #include<stdio.h>
int main(){
    int a;
    printf("Enter a value : ");
    scanf("%d", &a );
    printf("Value = %d\n", a);
    printf("Address = %p\n", &a);
    return 0;
} */

/* #include<stdio.h>
int main(){
    int a = 10;
    int *p;
    p = &a;
    printf("Value = %d\n", *p);
} */

/* #include<stdio.h>
int main(){
    float a = 10; float *p; p = &a; printf("Value = %f\n", *p);
    return 0;
} */

// WAP to input two numbers and perform addition using pointers.
/* #include<stdio.h>
int main(){
    int num1, num2, sum;
    int *p1, *p2, *psum;
    p1 = &num1;
    p2 = &num2;
    printf("Enter two numbers : ");
    scanf("%d %d", p1, p2);
    psum = &sum;
    *psum = *p1 + *p2;
    printf("The sum is : %d\n", *psum);
    return 0;
} */

// WAP to input two numbers and find the smallest and greatest one using pointer.
/* #include<stdio.h>
int main(){
    int num1, num2;
    int *p1, *p2;
    p1 = &num1;
    p2 = &num2;
    printf("Enter two numbers : ");
    scanf("%d %d", p1, p2);
    if(*p1 > *p2){
        printf("%d is the greatest %d is the smallest.\n", *p1, *p2);
    }
    else{
        printf("%d is the smallest %d is the greatest.\n", *p1, *p2);
    }
    return 0;
} */

/* #include<stdio.h>
int main(){
    int *p = 10; //invalid
    printf("Value = %d", *p);
    return 0;
} */

/* #include<stdio.h>
int main(){
    int a;
    int *p;
    p = &a;
    printf("Enter a number : ");
    scanf("%d", p);
    printf("Value of a = %d\n", a);
    printf("Value of *p = %d\n", *p);
    return 0;
} */

/* #include<stdio.h>
int main(){
    int a = 10;
    float b = 5.5;
    void *p;
    // p = &a;
    p = &b;
    // printf("Value of *p is = %d\n", *(int*)p);
      printf("Value of *p is = %.2f\n", *(float*)p);
    return 0;
} */

/* #include<stdio.h>
int main(){
    // int a = 5, b = 2;
    // int div_value = a/b;
    // printf("Division value = %d\n", div_value);

    // int a = 5, b = 2;
    // float div_value = a/b;
    // printf("Division value = %.2f", div_value);

    int a = 5, b = 2;
    float div_value = (float)a/b;
    printf("Division value = %.2f\n", div_value);
    return 0;
} */

/* #include<stdio.h>
int main(){
    int a = 97;
    char ch;
    ch = (char)a;
    printf("Value of ch = %c\n", ch);
    return 0;
} */

/* #include<stdio.h>
int main(){
    int a = 10;
    int *p, **q;
    p = &a; q = &p;
    printf("Enter a number : ");
    scanf("%d", q);
    printf("Value of a = %d\n", a);
    printf("Value of *p = %d\n", *p);
    printf("Value of **q = %d\n", **q);
    printf("Address of a = %p\n", &a);
    printf("Address of *p = %p\n", &p);
    printf("Address of **q = %p\n", &q);
    return 0;
} */

// WAP to find sum of an array elements using pointer
/* #include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int *p, *q;
    // p = &arr[0];
    // q = &arr[4];
    printf("%d\n", &arr[0]);
    printf("%d", &arr[1]);
    // int sum = 0;
    // while(p<=q){ //Here we are comparing..........................(fill in the blanks)
    //     sum = sum + *p;
    //     p++;
    // }
    // printf("Sum = %d\n", sum);
    return 0;
} */

// WAP to print the reverse of an array elements using poointer.
// #include<stdio.h>
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int *p;
//     p = &arr[4];
//     while(p>=arr){
//         printf("%d ", *p);
//         p--;
//     }
//     return 0;
// }

// WAP to return status : Login Successful
// #include<stdio.h>
// char *getMessage(){
//     return "Status : Login Successful";
// }
// int main(){
//     char *status;
//     status = getMessage();
//     printf("%s\n", status);
//     return 0;
// }

#include<stdio.h>
void test(int a, int *p){
    a = a + 5;
    *p = *p + 5;
    printf("Inside test value of a = %d *p = %d\n", a, *p);
}
int main(){
    int a = 2, b = 7;
    printf("Value of a = %d b = %d\n", a, b);
    test(a, &b);
    printf("Afetr test call, a = %d b = %d\n", a, b);
    return 0;
}