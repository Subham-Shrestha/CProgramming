#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

/* union Student{
    int roll;
    char name[50];
    int age;
};
struct stdnt{
    int roll;
    char name[50];
    int age;
};
int main(){
    union Student std;
    struct stdnt s;
    printf("Size of union = %d\n", sizeof(std));
    printf("Size of structure = %d\n", sizeof(s));
    return 0;
} */

/* union Student{
    int roll;
    char name[100];
    int age;
};
int main(){
    union Student std;
    printf("Enter details : \n");
    printf("Enter roll : \n");
    scanf("%d", &std.roll);
    printf("Roll : %d\n", std.roll);
    printf("Emnter name : \n");
    scanf("%s", std.name);
    printf("Name : %s\n", std.name);
    printf("Enter age : \n");
    scanf("%d", &std.age);
    printf("Age : %d\n", std.age);
    printf("Details of student : \n");    Union cannot print multiple values at a single time because all members of a union share the same memory location. When you assign a value to one member of the union, it overwrites the previous value stored in that memory location. Therefore, only the last assigned value will be retained and accessible. In this case, when you assign a value to std.age, it overwrites the values of std.roll and std.name, making them inaccessible.
    printf("Roll : %d \tName : %s \tAge : %d\n", std.roll, std.name, std.age);
    return 0;
} */

// typedef int Integer; You can define typedef here too...
/* int main()
{
    typedef int Integer;
    Integer num1 = 5, num2 = 10;
    printf("Num1 = %d\n", num1);
    printf("Num2 = %d", num2);
    return 0;
} */
