#include <stdio.h>
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    char address[50];
    char gender[10];
    int age;
};

int main()
{
    struct Student std[10];
    FILE *fp;
    int i;

    fp = fopen("studentData.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter details of students:\n");

    for (i = 0; i < 10; i++)
    {

        printf("Roll : ");
        scanf("%d", &std[i].roll);

        printf("Name : ");
        scanf(" %[^\n]", std[i].name);

        printf("Address : ");
        scanf(" %[^\n]", std[i].address);

        printf("Gender : ");
        scanf("%s", std[i].gender);

        printf("Age : ");
        scanf("%d", &std[i].age);

        fprintf(fp, "%d\t%s\t%s\t%s\t%d\n",
                std[i].roll,
                std[i].name,
                std[i].address,
                std[i].gender,
                std[i].age);
    }

    fclose(fp);
    printf("\nWritten to file successfully.\n");
    return 0;
}

    // fp = fopen("studentData.txt", "r");
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
    /* int max_age=std[0].age;
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
} */