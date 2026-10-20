/*Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
The program should print all the lines to the console until EOF (end of file) is reached.*/
#include <stdio.h>
int main()
{
    int age;
    char name[50];
    char line[100];
    FILE *fp;

    fp = fopen("info.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter the age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %sAge: %d\n", name, age);

    fclose(fp);

    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file.");
        return 1;
    }

    printf("\nFile contents:\n");

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
