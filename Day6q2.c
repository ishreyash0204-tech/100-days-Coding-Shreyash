//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main() {
    int a;
    printf("Enter value of a:");
    scanf("%d",&a);
    if(a>=0)
    {
        if(a==0)
        {
            printf("The number is zero");
        }
        else
        {
           printf("The number is positive");
        }
        }
        else
        {
            printf("The number is negative");
        }
        
            return 0;
    }