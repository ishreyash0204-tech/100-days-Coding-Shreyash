//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main() {
int radius;
float pi,area,circumference;
printf("Enter value of radius:");
scanf("%d",&radius);
pi=3.14;
area=(float)pi*radius*radius;
printf("Area=%.2f\n",area);
circumference=(float)2*pi*radius;
printf("Circumference=%.2f\n",circumference);
return 0;
}
