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

    /* struct Student{
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
        int min_age = 0;
        for(int i = 0; i < 3; i++){
            if(std[i].age < std[min_age].age){
                min_age = i;
            }
        }
        printf("Youngest Student : %d %s %d\n", std[min_age].roll, std[min_age].name, std[min_age].age);
        return 0;
    } */

    // WAP to store details of 5 employees and display the detauls of highest paid salary.
    struct Employee{
        int id;
        char name[50];
        float salary;
    };
    int main(){
        struct Employee emp[5];
        printf("Enter details of 5 employees (start from id, first name and salary) : \n");
        for (int i = 0; i < 5; i++){
            scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
        }
        printf("Details of Employees : \n");
        printf("ID\tName\tSalary\n");
        for (int i = 0; i < 5; i++){
            printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
        }
        int max_salary = 0;
        for(int i = 0; i < 5; i++){
            if(emp[i].salary > emp[max_salary].salary){
                max_salary = i;
            }
        }
        printf("Highest Paid Employee : %d %s %.2f\n", emp[max_salary].id, emp[max_salary].name, emp[max_salary].salary);
        return 0;
    }
