//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main() {
    int a,b,sum,difference,product,quotient;

    printf("Enter value of a:");
    scanf("%d",&a);

    printf("Enter value of b:");
    scanf("%d",&b);

    sum=a+b;
    printf("Sum=%d\n",sum);

    difference=a-b;
    printf("Difference=%d\n",difference);

    product=a*b;
    printf("Product=%d\n",product);

    if(b!=0)
    {
    quotient=a/b;
    printf("Quotient=%d\n",quotient);
    }
    else
    {
        printf("Quotient=Not Possible");
    }
        return 0;
}