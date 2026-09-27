//Print the initials of a name.
#include<stdio.h>
int main()
{
    char name[100];

    fgets(name, sizeof(name), stdin);

    printf("%c.", name[0]);

    for (int i = 1; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            printf("%c.", name[i + 1]);
        }
    }

    return 0;
}