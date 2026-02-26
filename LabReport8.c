// WAP to store "Tribhuwan University" into a file "tu.txt".
/* #include <stdio.h>
int main()
{
    FILE *fp;
    char ch[1000] = "Tribhuwan University";
    fp = fopen("tu.txt", "w");
    if (fp == NULL)    {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "%s", ch);
    fclose(fp);
    printf("String written to file successfully.\n");
    return 0;
} */

// WAP to copy the content of "tu.txt" to "university.txt".
/* #include <stdio.h>
int main(){
    FILE *tu, *uni;
    char ch;
    tu = fopen("tu.txt", "r");
    if (tu == NULL)    {
        printf("Error opening tu.txt!\n");
        return 1;
    }
    uni = fopen("university.txt", "w");
    if (uni == NULL)    {
        printf("Error opening university.txt!\n");
        return 1;
    }
    while((ch = fgetc(tu)) != EOF){
        fputc(ch, uni);
    }
    fclose(tu);
    fclose(uni);
    printf("Content copied successfully.\n");
    return 0;
} */

// WAP to read the content of "tu.txt" and store all the vowels into "vowels.txt" and all the consonants into "consonants.txt".
/* #include <stdio.h>
int main() {
    FILE *tu, *vowels, *consonants;
    char ch;
    tu = fopen("tu.txt", "r");
    if (tu == NULL) {
        printf("Error opening tu.txt!\n");
        return 1;
    }
    vowels = fopen("vowels.txt", "w");
    if (vowels == NULL) {
        printf("Error opening vowels.txt!\n");
        fclose(tu);
        return 1;
    }
    consonants = fopen("consonants.txt", "w");
    if (consonants == NULL) {
        printf("Error opening consonants.txt!\n");
        fclose(tu);
        fclose(vowels);
        return 1;
    }
    while((ch = fgetc(tu)) != EOF){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            fputc(ch, vowels);
        } else {
            fputc(ch, consonants);
        }
    }
    fclose(tu);
    fclose(vowels);
    fclose(consonants);
    printf("Vowels and consonants stored in the specified files successfully.\n");
    return 0;
} */

// // WAP to create a file names "employees.txt" and store name, address and salary of n employees in it taking the details of employee as input from user.
// /* #include <stdio.h>
// int main() {
//     FILE *fp;
//     char name[100], address[100];
//     float salary;
//     int n;
//     fp = fopen("employees.txt", "w");
//     if (fp == NULL) {
//         printf("Error opening employees.txt!\n");
//         return 1;
//     }
//     printf("Enter the number of employees: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         printf("Enter name, address and salary of employee %d: ", i + 1);
//         scanf("%s %s %f", name, address, &salary);
//         fprintf(fp, "%s %s %.2f\n", name, address, salary);
//     }
//     fclose(fp);
//     printf("Employee details stored successfully in employees.txt.\n");
//     return 0;
// } */

// A data file contains name, address and salary of some employees. WAP to display the contentsof those persons whose address is "KTM".
/* #include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    char name[100], address[100];
    float salary;
    fp = fopen("employees.txt", "r");
    if (fp == NULL) {
        printf("Error opening employees.txt!\n");
        return 1;
    }
    printf("Employees with address 'KTM':\n");
    while (!feof(fp)) {
        fscanf(fp, "%s %s %f", name, address, &salary);
        if (strcmp(address, "KTM") == 0) {
            printf("Name: %s, Address: %s, Salary: %.2f\n", name, address, salary);
        }
    }
    fclose(fp);
    return 0;
} */

// WAP to input any address and show the records of the matching address from the file "employees.txt".
/* #include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    char name[100], address[100];
    float salary; 
    char searchAddress[100];
    fp = fopen("employees.txt", "r");
    if (fp == NULL) {
        printf("Error opening employees.txt!\n");
        return 1;
    }
    printf("Enter the address to search: ");
    scanf("%s", searchAddress);
    printf("Employees with address '%s':\n", searchAddress);
    while (!feof(fp)) {
        fscanf(fp, "%s %s %f", name, address, &salary);
        if (strcasecmp(address, searchAddress) == 0) {
            printf("Name: %s\nAddress: %s\nSalary: %.2f\n", name, address, salary);
        }
    }
    fclose(fp);
    return 0;
} */

// WAP to store detail of N students in a std.txt file and display the records of student who is youngest.
/* #include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    char name[100], address[100];
    int age;
    int n;
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening students.txt!\n");
        return 1;
    }
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter name, address, age of student %d: ", i + 1);
        scanf("%s %s %d", name, address, &age);
        fprintf(fp, "%s %s %d\n", name, address, age);
    }
    fclose(fp);
    printf("Student details stored successfully in students.txt.\n");

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening students.txt!\n");
        return 1;
    }
    char youngestName[100];
    char youngestAddress[100];
    int youngestAge = 100;
    while (!feof(fp)) {
        fscanf(fp, "%s %s %d", name, address, &age);
        if (age < youngestAge) {
            youngestAge = age;
            strcpy(youngestName, name);
            strcpy(youngestAddress, address);
        }
    }
    fclose(fp);
    printf("Youngest Student Details:\nName: %s\nAddress: %s\nAge: %d\n", youngestName, youngestAddress, youngestAge);
    return 0;
} */

// WAP to update salary of every employee by 15% in the file "employees.txt".
/* #include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    char name[100], address[100];
    float salary;
    fp = fopen("employees.txt", "r");
    if (fp == NULL) {
        printf("Error opening employees.txt!\n");
        return 1;
    }
    FILE *temp = fopen("temp.txt", "w");
    if (temp == NULL) {
        printf("Error creating temp.txt!\n");
        fclose(fp);
        return 1;
    }
    while(!feof(fp)){
        fscanf(fp, "%s %s %f", name, address, &salary);
        salary *= 1.15; 
        fprintf(temp, "%s %s %.2f\n", name, address, salary);
    }
    fclose(fp);
    fclose(temp);
    remove("employees.txt");
    rename("temp.txt", "employees.txt");
    printf("Salary updated successfully in employees.txt.\n");
    return 0;
} */

// WAP to store 5 employee detail (name, id, salary) in a employee.dat binary file and display the details of all employees.
/*#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    FILE *fp;
    struct Employee emp;
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening employees.dat!\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("Enter name, id and salary of employee %d: ", i + 1);
        scanf("%s %d %f", emp.name, &emp.id, &emp.salary);
        fwrite(&emp, sizeof(struct Employee), 1, fp);
    }
    fclose(fp);
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening employees.dat!\n");
        return 1;
    }
    printf("Employee Details:\n");
    while (fread(&emp, sizeof(struct Employee), 1, fp)) {
        printf("Name: %s\tID: %d\tSalary: %.2f\n", emp.name, emp.id, emp.salary);
    }
    fclose(fp);
    return 0;
} */