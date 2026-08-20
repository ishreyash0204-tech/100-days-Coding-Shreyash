//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main() {
    int length,breadth,area,perimeter;
    printf("Enter value of length:");
    scanf("%d",&length);
    printf("Enter value of breadth:");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("Area=%d\n",area);
    perimeter=2*(length+breadth);
    printf("Perimeter=%d\n",perimeter);
    return 0;
}
