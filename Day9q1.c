//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c,D,Root1,Root2;
     printf("Enter value of a:");
     scanf("%f",&a);
     printf("Enter value of b:");
     scanf("%f",&b);
     printf("Enter value of c:");
     scanf("%f",&c);
     D=b*b-4*a*c;
     if(D>0)
    {
        Root1=(-b+sqrt(D))/2*a;
        Root2=(-b-sqrt(D))/2*a;
        printf("Two Real and Distinct Roots:%.2f and %.2f",Root1,Root2);
    }
    else if(D==0)
    {
        Root1=-b/(2*a);
        printf("Two Real and Equal roots:%.2f and %.2f",Root1,Root1);
    }
    else
    {
        printf("Roots are Complex");
    }
    return 0;
}