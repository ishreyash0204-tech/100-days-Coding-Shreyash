//Q1: Write a program to input two numbers and display their sum.
#include<stdio.h>
int main() {
    int a,b,sum;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    sum=a+b;
    printf("Sum=%d",sum);
    return 0;
}