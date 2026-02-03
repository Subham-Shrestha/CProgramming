// WAP to store name, roll, age of a student in a structure and display it.
#include<stdio.h>
#include<string.h>
/* struct Student{
    int roll;
    char name[50];
    int age;
}; */
/* int main(){
    struct Student std; // = {05, "Sandip", 19}; can be also used to initialize but not the best approach.
    std.roll = 5;
    strcpy(std.name, "Sandip");
    std.age = 19; */

    /* printf("Enter name : ");
    scanf("%s", std.name);
    printf("Enter roll : ");
    scanf("%d", &std.roll);
    printf("Enter age : ");
    scanf("%d", &std.age); */

    /* printf("Detail of Student : \n");
    printf("Roll : %d\n", std.roll);
    printf("Name : %s\n", std.name);
    printf("Age : %d\n", std.age);  */

    // // Book System.
    // struct Book{
    //     int id;
    //     char name[100];
    //     float price;
    // };
    // int main(){
        
    // }
    
    // // return 0;

    struct Student{
        int roll;
        char name[50];
        int age;
    };
    int main(){
        struct Student std[3];
        printf("Enter details of 3 students (start from roll, name and age) : \n");
        for (int i = 0; i < 3; i++){
            scanf("%d %s %d", &std[i].roll,std[i].name,&std[i].age);
        }
        printf("Details of Students : \n");
        printf("Roll\tName\tAge\n");
        for (int i = 0; i < 3; i++){
            printf("%d\t%s\t%d\n", std[i].roll, std[i].name, std[i].age);
        }
        return 0;
    }