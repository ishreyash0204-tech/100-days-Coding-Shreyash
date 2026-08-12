//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping\na=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}