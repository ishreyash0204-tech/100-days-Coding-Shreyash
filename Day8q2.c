//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    if(a>=b && a>=c)
    {
        printf("%d is largest",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d is largest",b);
    }
    else
    {
        printf("%d is largest",c);
    }
    return 0;
}