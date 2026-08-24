//Write a program to reverse a given number.
#include<stdio.h>
int main() {
    int n;
    int rev_n = 0;
    printf("Enter A Number To Get It's Reverse: ");
    scanf("%d", &n);
    while (n != 0)
    {
        int remainder = n % 10;
        rev_n = rev_n * 10 + remainder;
        n /= 10;
    }
    printf("%d\n", rev_n);
    return 0;
}