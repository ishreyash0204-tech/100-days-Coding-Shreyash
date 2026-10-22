/*Take two filenames from the user – a source file and a destination file. Copy all the content from the 
source file to the destination file using fgetc() and fputc().*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp, *fp1;
    int ch;

    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening info.txt\n");
        return 1;
    }

    fp1 = fopen("cpy.txt", "w");
    if (fp1 == NULL)
    {
        printf("Error opening cpy.txt\n");
        fclose(fp);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch, fp1);
    }

    fclose(fp);
    fclose(fp1);

    printf("File copied successfully!\n");
    return 0;
}
