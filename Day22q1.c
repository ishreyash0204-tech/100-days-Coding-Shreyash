//Write a program to check if a number is a strong number.
#include<stdio.h>
int main() {
    int n,original,digit,factorial,sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0)
    {
        digit = n % 10;
        factorial = 1;
        for (int i = 1; i <= digit; i++)
        {
            factorial *= i;
        }
        sum += factorial;
        n /= 10;
    }
    if (sum == original)
    {
        printf("Strong Number", original);
    }
    else
    {
        printf("Not a Strong Number", original);
    }
    return 0;
}