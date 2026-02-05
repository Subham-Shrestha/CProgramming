// WAP to store name, roll, age of a student in a structure and display it.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
    /* struct Employee{
        int id;
        char name[50];
        float salary;
    };
    int main(){
        // struct Employee emp[5]; [For 5 employees]
        int n;
        printf("Enter number of employees : "); //[For n employees]
        scanf("%d", &n);
        struct Employee emp[n];
        printf("Enter details of %d employees (start from id, first name and salary) : \n", n);
        for (int i = 0; i < n; i++){
            scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
        }
        printf("Details of Employees : \n");
        printf("ID\tName\tSalary\n");
        for (int i = 0; i < n; i++){
            printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
        }
        int max_salary = 0;
        for(int i = 0; i < n; i++){
            if(emp[i].salary > emp[max_salary].salary){
                max_salary = i;
            }
        }
        printf("Highest Paid Employee : %d %s %.2f\n", emp[max_salary].id, emp[max_salary].name, emp[max_salary].salary);
        return 0;
    } */
   
   //Using pointer to structure
/* struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    int n;
    printf("Enter number of employees : ");
    scanf("%d", &n);
    struct Employee *emp;
    emp = malloc(n * sizeof(struct Employee));
//    emp = (struct Employee *)malloc(sizeof(struct Employee));  For semantic error correction.
    printf("Enter details of %d employees (start from id, first name and salary) : \n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }
    printf("Details of Employees : \n");
    printf("ID\tName\tSalary\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    int max_salary = 0;
    for (int i = 0; i < n; i++)
    {
        if (emp[i].salary > emp[max_salary].salary)
        {
            max_salary = i;
        }
    }
    printf("Highest Paid Employee : %d %s %.2f\n", emp[max_salary].id, emp[max_salary].name, emp[max_salary].salary);
    return 0;
} */

/* struct Student{
    int roll;
    char name[50];
    struct Birthdate{
        int dd, mm, yy;
    } dob;
};
int main(){
    struct Student std;
    printf("Enter roll, name and date of birth (dd mm yy) : ");
    scanf("%d %s %d %d %d", &std.roll, std.name, &std.dob.dd, &std.dob.mm, &std.dob.yy);
    printf("Details of student : \n");
    printf("Roll : %d\n", std.roll);
    printf("Name : %s\n", std.name);
    printf("Date of Birth : %d/%d/%d\n", std.dob.dd, std.dob.mm, std.dob.yy);
    return 0;
} */

// WAP to store detail of student (roll, name, address(city, zip code/pin code)) and display it.
/* struct Address{
    char city[50];
    int pin_code;
};
struct Student{
    int roll;
    char name[50];
    struct Address addr;
};
int main(){
    struct Student std;
    printf("Enter roll, name, city and pin code : ");
    scanf("%d %s %s %d", &std.roll, std.name, std.addr.city, &std.addr.pin_code);
    printf("Details of student : \n");
    printf("Roll : %d\n", std.roll);
    printf("Name : %s\n", std.name);
    printf("City : %s\n", std.addr.city);
    printf("Pin Code : %d\n", std.addr.pin_code);
    return 0;
} */

// Passing structure to function
/* struct Address
{
    char city[50];
    int pin_code;
};
struct Student
{
    int roll;
    int age;
    char name[50];
    struct Address addr;
};
void display(struct Student s){
    printf("Roll : %d\n", s.roll);
    printf("Name : %s\n", s.name);
    printf("Age : %d\n", s.age);
}
int main()
{
    struct Student std;
    printf("Enter roll, name, age, city and pin code : ");
    scanf("%d %s %d %s %d", &std.roll, std.name, &std.age, std.addr.city, &std.addr.pin_code);
    display(std); 
    return 0;
} */

/* struct Student{
    int roll;
    char name[50];
    int age;
};
int main(){
    struct Student std;
    struct Student *p;
    p = &std;
    printf("Enter details(roll, name, age) : ");
    scanf("%d %s %d", &std.roll, std.name, &std.age);
    printf("Details of Student : \n");
    printf("Roll : %d\n", p->roll);
    printf("Name : %s\n", p->name);
    printf("Age : %d\n", p->age);
    return 0;
} */

