//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main() {
    int a;
    printf("Enter value of a:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}