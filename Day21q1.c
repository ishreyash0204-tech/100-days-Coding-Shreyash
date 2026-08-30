//Write a program to swap the first and last digit of a number.
#include<stdio.h>
int main() {
    int num,firstDigit,lastDigit;
    int tempNum,divisor = 1;
    int middle,swappedNum;
    printf("Enter A Number: ");
    scanf("%d", &num);
    tempNum = num;
    lastDigit = num % 10;
    while(tempNum >= 10)
    {
        tempNum = tempNum / 10;
        divisor = divisor * 10;
    }
    firstDigit = tempNum;
    middle = (num % divisor) / 10;
    swappedNum = lastDigit * divisor + middle * 10 + firstDigit;
    printf("%d", swappedNum);
    return 0;
}