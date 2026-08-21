/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
#include<stdio.h>
int main() {
int unit,bill;
printf("Enter Units consumed:");
scanf("%d",&unit);
if(unit<=100)
{
    bill=unit*5;
    printf("Bill=%d",bill);
}
else if(unit<=200)
{
    bill=(100 * 5) + ((unit - 100) * 7);
    printf("Bill=%d",bill);
}
else if(unit<=300)
{
    bill=(100 * 5) + (100 * 7) + ((unit - 200) * 10);
    printf("Bill=%d",bill);
}
else
{
    bill=bill = (100 * 5) + (100 * 7) + (100 * 10) + ((unit - 300) * 12);
    printf("Bill=%d",bill);
}
return 0;
}
