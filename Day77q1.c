/*Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes 
the result to output.txt.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");

    if (in == NULL) {
        printf("Error opening input.txt");
        return 1;
    }

    out = fopen("output.txt", "w");

    if (out == NULL) {
        printf("Error opening output.txt");
        fclose(in);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        ch = toupper((unsigned char)ch);
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Text converted to uppercase successfully.");

    return 0;
}

