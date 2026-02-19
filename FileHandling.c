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

// WAP to write Tribhuwan University and read to a file tu.txt.
    /* char str[] = "Tribhuwan University";
    FILE *fp = fopen("tu.txt", "w");
    for (int i = 0; str[i] != '\0'; i++)
    {
        fputc(str[i], fp);
    }
    printf("Written in file successfully.\n");
    fclose(fp); */
    /* FILE *fp = fopen("tu.txt", "r");
if(fp == NULL){
    printf("No file found.\n");
    return 0;
}else{
    while (!feof(fp)){
        char n = fgetc(fp);
        printf("%c", n);
    }
}
printf("\n");
fclose(fp); */

// char ch;
/* char col_nam[60];
FILE *fp = fopen("tu.txt", "a");
if (fp == NULL)
{
    printf("No file found.\n");
    return 0;
}else{
    for (int i = 0; col_nam[i] != '\0'; i++){
        scanf("%c", &col_nam[i]);
        fputc(col_nam[i], fp);
    }
}
fclose(fp); */

/* FILE *fp = fopen("tu.txt", "r");
if (fp == NULL)
{
    printf("No file found.\n");
    return 0;
}
else
{
    while (!feof(fp))
    {
        char n = fgetc(fp);
        printf("%c", n);
    }
}
printf("\n");
fclose(fp); */

// WAP to count number of characters in a file tu.txt.
/* FILE *fp = fopen("tu.txt", "r");
if (fp == NULL)
{
    printf("No file found.\n");
    return 0;
}
else
{
    int count = 0;
    while (!feof(fp))
    {
        char n = fgetc(fp);
        if (n != EOF)
        {
            count++;
        }
    }
    printf("Number of characters in the file: %d\n", count);
}
fclose(fp); */

// WAP to cont number of vowels in a file tu.txt.
/* FILE *fp = fopen("tu.txt", "r");
if (fp == NULL)
{
    printf("No file found.\n");
    return 0;
}
else
{
    int vowel_count = 0;
    while (!feof(fp))
    {
        char n = fgetc(fp);
        if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
        {
            vowel_count++;
        }
    }
    printf("Number of vowels in the file: %d\n", vowel_count);
}
fclose(fp); */

// WAP to input your current address and store it in address.txt file and then append your permanent address to the file and check the no. of  vowels and consonents the file has.
/* FILE *fp = fopen("address.txt", "w");
if (fp == NULL)
{
    printf("No file found.\n");
    return 0;
}
else
{    char current_address[100];
    printf("Enter your current address: ");
    fgets(current_address, 100, stdin);
    fputs(current_address, fp);
    printf("Current address stored successfully.\n");
    fclose(fp); */


    /* fp = fopen("address.txt", "a");
    if (fp == NULL)
    {
        printf("No file found.\n");
        return 0;
    }
    else
    {
        char permanent_address[100];
        printf("Enter your permanent address: ");
        fgets(permanent_address, 100, stdin);
        fputs(permanent_address, fp);
        printf("Permanent address stored.\n");
        fclose(fp); */

        
    /*  fp = fopen("address.txt", "r");
        if (fp == NULL){
            printf("No file found.\n");
            return 0;
        }else{
            int vowel_count = 0, consonant_count = 0;
            while (!feof(fp)){
                char ch = fgetc(fp);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                    vowel_count++;
                }else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
                    consonant_count++;
                }
            }
            printf("Number of vowels: %d\n", vowel_count);
            printf("Number of consonants: %d\n", consonant_count);
            fclose(fp);
        }
    }
}
return 0;
} */

    // WAP to input sentenxce and stgore it in sentence.txt Then copy all vowels from the sentence.txt to vowel.txt and consonants to consonent.txt.
    // FILE *fp = fopen("sentence.txt", "w");
    // FILE *vowel_fp = fopen("vowel.txt", "w");
    // FILE *consonant_fp = fopen("consonant.txt", "w");
    // if(fp == NULL){
    //     printf("No file found.\n");
    //     return 0;
    // }else{
    //     char sentence[10000];
    //     printf("Enter a sentence : ");
    //     fgets(sentence, 10000, stdin);
    //     fputs(sentence, fp);
    //     printf("Sentence stored successfully.\n");
    //     fclose(fp);


    //     fp = fopen("sentence.txt", "r");
    //     if (fp == NULL)
    //     {
    //         printf("No file found.\n");
    //         return 0;
    //     }
    //     if (vowel_fp == NULL || consonant_fp == NULL)
    //     {
    //         printf("Errror.\n");
    //         return 0;
    //     }
    //             while(!feof(fp)){
    //                 char ch = fgetc(fp);
    //                 if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    //                 {
    //                     fputc(ch, vowel_fp);
    //             }
    //             else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    //             {
    //                 fputc(ch, consonant_fp);
    //             }
    //         }
        

    //     }
    //     fclose(fp);
    //     fclose(vowel_fp);
    //     fclose(consonant_fp);


    //     vowel_fp = fopen("vowel.txt", "r");
    //     consonant_fp = fopen("consonant.txt", "r");

    //     if (vowel_fp == NULL || consonant_fp == NULL)
    //     {
    //         printf("No file found.\n");
    //         return 0;
    //     }
    //     else
    //     {
    //         printf("Vowels : \n");
    //         while (!feof(vowel_fp))
    //         {
    //             char n = fgetc(vowel_fp);
    //             printf("%c", n);
    //         }
    //         printf("\n");
    //         printf("Consonants : \n");
    //         while (!feof(consonant_fp))
    //         {
    //             char n = fgetc(consonant_fp);
    //             printf("%c", n);
    //         }
    //     }
    //     printf("\n");
    //     fclose(vowel_fp);
    //     fclose(consonant_fp);

/*  FILE *fp = fopen("sentence.txt", "r");
    char print;
    for (int i = 0; i < 10; i++)
    {
        print = fgetc(fp);
        printf("%c", print);
    }
    printf("\n");
    fclose(fp); */

    // WAP to copy the content of tu.txt to "university.txt"
        /* FILE *tu, *uni;
        char ch;
        tu = fopen("tu.txt", "r");
        if (tu == NULL){
            printf("Error.\n");
        }
        uni = fopen("university.txt", "w");
        if (uni == NULL){
            printf("Error.\n");
        }
        while ((ch = fgetc(tu)) != EOF){
            fputc(ch, uni);
        }
        printf("File copied successfully.\n");
        fclose(tu);
        fclose(uni);
        return 0; */

/* FILE *fp;
int i;
char ch;
char uni[100] = "Tribhuwan University";
fp = fopen("University.txt", "w+");
for (i = 0; uni[i] != '\0'; i++){
    fputc(uni[i], fp);
}
printf("Written successfully\n");
rewind(fp);
printf("Details of file : ");
while(!feof(fp)){
    ch = fgetc(fp);
    printf("%c", ch);
}
fclose(fp); */

/* FILE *fp;
int i;
char ch;
char caste[100] = "Lama";
fp = fopen("name.txt", "r+");
printf("Details of file : ");
while(!feof(fp)){
    ch = fgetc(fp);
    printf("%c", ch);
}
for (i = 0; caste[i] != '\0'; i++){
    fputc(caste[i], fp);
}
printf("Written successfully.");
fclose(fp); */

FILE *fp;
int i;
char ch[1000];
char caste[100] = "Lama";
fp = fopen("name.txt", "a+");
printf("Details of file : \n");
if(fp == NULL){
    printf("Error.");
    return 0;
}else{
    for (i = 0; caste[i] != '\0'; i++)
    {
        scanf("%s", ch[i]);
        fputc(caste[i], fp);
    }
}
printf("Written successfully.\n");
fclose(fp);
}