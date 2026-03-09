// Example
#include<stdio.h>
/* #define num1 1
int main(){
    printf("Number = %d\n", num1);
} */
/* #define name "Orchid"
int main(){
    printf("Name = %s\n", name);
} */
/* #define PI 3.14
int main(){
    int r = 5;
    float area = PI * r * r;
    printf("Area : %.2f\n", area);
} */

// WAP to input the required values and find area of cylinder.
/* #define PI 3.14
int main(){
    float radius, height, area;
    printf("Enter the radius and height of cylinder :");
    scanf("%f %f", &radius, &height);
    area = 2 * PI * radius * (radius + height);
    printf("Area : %.2f\n", area);
} */

// enum example
enum status
{
    FAIL = 0,
    PASS = 1
};
int main(){
    enum status result;
    result = PASS;
    printf("Result : %d\n", result);
    return 0;
}