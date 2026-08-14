//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main() {
    float principal, rate, time, si , ci;
    printf("Enter value of principal:");
    scanf("%f",&principal);
    printf("Enter value of rate:");
    scanf("%f",&rate);
    printf("Enter value of time:");
    scanf("%f",&time);
    si=principal*rate*time/100;
    ci=principal*pow((1 + rate / 100), time)-principal;
    printf("Simple Interest:");
    printf("si=%.2f\n",si);
    printf("Compound Interest:");
    printf("ci=%.2f\n",ci);
    return 0;
}