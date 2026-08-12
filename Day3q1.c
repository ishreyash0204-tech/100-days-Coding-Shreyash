//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main() {
    float temperature,a;
    printf("Enter Temperature(in celsius):");
    scanf("%f",&temperature);
    a=(float)(temperature*1.8)+32;
    printf("Temperature in Fahrenheit=%.2f\n",a);
    return 0;
}