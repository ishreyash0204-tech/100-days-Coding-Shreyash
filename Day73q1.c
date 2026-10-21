/*Read a text file and count the total number of characters, words, and lines. A word is defined as a 
sequence of non-space characters separated by spaces or newlines.*/


#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    int lastChar = '\n';

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: info.txt file not found!\n");
        printf("Create info.txt in the program's working folder.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        lastChar = ch;

        if (ch == '\n') {
            lines++;
        }

        if (isspace((unsigned char)ch)) {
            inWord = 0;
        } else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    fclose(fp);
    return 0;
}
