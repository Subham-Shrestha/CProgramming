#include <stdio.h>
// creating structure to store details of different type
struct Student
{
    int roll;
    char name[50];
    char address[50];
    char gender;
    int age;
};
int main()
{
    // creating object of student
    struct Student std[10];
    // accessing the file we make a file pointer
    FILE *fp;
    // to initialize loop
    int i;
    // opeing a file
    /* fp = fopen("studentData.txt", "w");
    // writing details to the file
    printf("Enter details of students : \n");
    // for 10 students details we use loop
    for (i = 0; i < 10; i++){
        printf("ROll : ");
        scanf("%d", &std[i].roll);
        printf("\nName : ");
        scanf("%s", std[i].name);
        printf("\nAddress :");
        scanf("%s", std[i].address);
        printf("\nGender : ");
        scanf(" %c", &std[i].gender);
        printf("\nAge : ");
        scanf("%d", &std[i].age);
        // writing whole line to the file
        fprintf(fp, "%d\t%s\t%s\t%c\t%d\n", std[i].roll, std[i].name, std[i].address, std[i].gender, std[i].age);

    }
    printf("Written in file successfully.");
    // closeing the file
    fclose(fp); */

    fp = fopen("studentData.txt", "r");
    // // checking if file exists or not
    // if (fp == NULL)
    // {
    //     printf("Unable to find file.\n");
    // }
    // else
    // {
    //     char line[256];
    //     printf("Details are : \n");
    //     i = 0;
    //     while (i < 10 && fgets(line, sizeof(line), fp))
    //     {
    //         // Expected format: roll\tname\taddress\tgender\tage\n
    //         if (sscanf(line, "%d\t%49[^	]\t%49[^	]\t %c\t%d", &std[i].roll, std[i].name, std[i].address, &std[i].gender, &std[i].age) == 5)
    //         {
    //             printf("Roll : %d \tName : %s \tAddress : %s \tGender : %c \tAge : %d \n", std[i].roll, std[i].name, std[i].address, std[i].gender, std[i].age);
    //             i++;
    //         }
    //         else
    //         {
    //             printf("Skipping malformed line: %s", line);
    //         }
    //     }
    //     if (i == 0)
    //     {
    //         printf("No valid records found.\n");
    //     }
    // }
    int max_age=std[0].age;
    int min_age=std[0].age;
    // comparing and replacing the max and min age
    for (i=0; i<10;i++)
    {
        if (max_age < std[i].age)
        {
            max_age = std[i].age;
        }
        if (min_age > std[i].age)
        {
            min_age = std[i].age;
        }
    }
    min_age=std[i].age;
    printf("Maximum age is : %d \n", max_age);
    printf("Minimum age is : %d \n", min_age);
    // printing the data of max age student.
    for (i = 0; i < 10; i++){
        if(max_age == std[i].age){
            printf("Roll : %d \tName : %s \tAddress : %s \tGender : %c \tAge : %d \n", std[i].roll, std[i].name, std[i].address, std[i].gender, std[i].age);
        }
    }
    // printing min age student detail.

    // Graphics Mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    rectangle(50,50,300,150);
    fclose(fp);
    return 0;
}