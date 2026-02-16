#include<stdio.h>
#include<string.h>
int main(){
// WAP to read and write in file.
    /* int i;
    char name[50] = "Ram";
    FILE *fp = fopen("name.txt", "w"); //Make sure there is no other with "name.txt" while using "w" else it will override it.
    for (i = 0; name[i] != '\0'; i++)
    {
        fputc(name[i], fp);
    }
    printf("Written in file successfully.\n");
    fclose(fp); */  
    /* char n;
    FILE *fp = fopen("name.txt", "r");
    while(!feof(fp)){
        n = fgetc(fp);
        printf("%c", n);
    }
    printf("\n");
    fclose(fp); */

    // WAP to input and output your name.
    /* char name[50];
    FILE *fp = fopen("MyName.txt", "w");
    printf("Enter your name : \n");
    fgets(name, 50, stdin);
    fputs(name, fp);
    fclose(fp); */
    /* FILE *fp = fopen("MyName.txt", "r");
    while (!feof(fp)){
        char n = fgetc(fp);
        printf("%c", n);
    }
    printf("\n");
    fclose(fp);
    return 0; */

}