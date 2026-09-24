//Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[100];
    
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u') {
            printf("%c", str[i]);
        }
    }

    return 0;
}