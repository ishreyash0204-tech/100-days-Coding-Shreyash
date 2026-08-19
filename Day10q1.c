//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the length of side a:");
    scanf("%d",&a);
    printf("Enter the length of side b:");
    scanf("%d",&b);
    printf("Enter the length of side c:");
    scanf("%d",&c);
    if(a==b && b==c)
    {
        printf("The Triangle is Equilateral");
    }
    else if(a==b || b==c || a==c)
    {
        printf("The Triangle is isosceles");
    }
    else
    {
        printf("The Triangle is Scalene");
    }
    return 0;
}