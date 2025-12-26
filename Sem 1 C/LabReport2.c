// WAP to input time and print message. write 2 programs one using if-else and another using switch-case.
/* 5.0 - 11.59  - Good Morining
    12.0 - 16.59 - Good Afternoon
    17.0 - 21.59 - Good Evening
    Else Good Night*/
/*  IF-ELSE CODE
#include <stdio.h>
int main()
{
    float time;
    printf("Enter the time (in 24-hour format, e.g., 14.30 for 2:30 PM): \n");
    scanf("%f", &time);
    if (time >= 5.0 && time < 12.0)
    {
        printf("Good Morning\n");
    }   
    else if (time >= 12.0 && time < 17.0)
    {
        printf("Good Afternoon\n");
    }
    else if (time >= 17.0 && time < 22.0)
    {
        printf("Good Evening\n");
    }
    else
    {
        printf("Good Night\n");
    }
    return 0;
} */
/* SWITCH CASE CODE
#include <stdio.h>
int main()
{
    int hour;
    printf("Enter the hour (0-23): \n");
    scanf("%d", &hour);
    switch (hour)
    {
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        printf("Good Morning\n");
        break;
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
        printf("Good Afternoon\n");
        break;
    case 17:   
    case 18:
    case 19:
    case 20:
    case 21:
        printf("Good Evening\n");
        break;
    default:
        printf("Good Night\n");
        break;
    }
    return 0;
} */

// WAP to input a number and check if it is leap year or not.
/* #include <stdio.h>
int main(){
    int year;
    printf("Enter a year: \n");
    scanf("%d", &year);
    if((year % 4 ==0 && year % 100 !=0) || (year % 400 ==0)){
        printf("%d is a leap year.\n", year);
    }else{
        printf("%d is not a leap year.\n", year);
    }
    return 0;
} */

// WAP toinput and perform many operation using switch case.
/* if user input 1 : Area of circle.
if user input 2 : Area of rectangle.
if user input 3 : Area of triangle.
if user input 4 : Exit.
if user input except (1-4) print invalid. */
/* SWITCH CASE CODE 
 #include <stdio.h>
#define PI 3.1416
int main(){
    int choice;
    float radius, length, breadth, base, height, area;
    printf("Choose an operation:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("4. Exit\n");
    printf("Enter your choice (1-4): \n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter the radius of the circle: \n");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of Circle: %.2f\n", area);
            break;
        case 2:
            printf("Enter the length and breadth of the rectangle: \n");
            scanf("%f %f", &length, &breadth);
            area = length * breadth;
            printf("Area of Rectangle: %.2f\n", area);
            break;
        case 3:
            printf("Enter the base and height of the triangle: \n");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of Triangle: %.2f\n", area);
            break;
        case 4:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please select a valid option (1-4).\n");
            break;
    }
    return 0;
} */