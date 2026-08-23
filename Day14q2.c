//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n, product = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product = product * i;
    }

    printf("%d", product);

    if (n >= 2) {
        printf(" (");

        for (int i = 2; i <= n; i += 2) {
            printf("%d", i);

            if (i + 2 <= n) {
                printf(" * ");
            }
        }

        printf(")");
    }

    return 0;
}