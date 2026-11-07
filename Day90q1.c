//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter person's name: ");
    scanf("%s", p.name);

    printf("Enter gender (0 for Male, 1 for Female, 2 for Other): ");
    scanf("%d", (int *)&p.gender);

    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;

        case FEMALE:
            printf("Gender: Female\n");
            break;

        case OTHER:
            printf("Gender: Other\n");
            break;

        default:
            printf("Invalid Gender\n");
    }

    return 0;
}