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
    // checking if file exists or not
    if (fp == NULL)
    {
        printf("Unable to find file.\n");
    }
    else
    {
        char line[256];
        printf("Details are :\n");
        i = 0;
        while (i < 10 && fgets(line, sizeof(line), fp))
        {
            // each line should be: roll\tname\taddress\tgender\tage\n
            if (sscanf(line, "%d\t%49[^	]\t%49[^	]\t %c\t%d", &std[i].roll,
                       std[i].name, std[i].address, &std[i].gender, &std[i].age) == 5)
            {
                printf("Roll : %d\tName : %s\tAddress : %s\tGender : %c\tAge : %d\n",
                       std[i].roll, std[i].name, std[i].address, std[i].gender, std[i].age);
                i++;
            }
            else
            {
                printf("Skipping malformed line: %s", line);
            }
        }
        if (i == 0)
        {
            printf("No valid records found.\n");
        }
    }
    fclose(fp);
    return 0;
}