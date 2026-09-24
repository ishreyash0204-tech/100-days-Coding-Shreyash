//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';

        if (count[index] == 1) {
            printf("%c", str[i]);
            return 0;
        }

        count[index]++;
    }

    return 0;
}