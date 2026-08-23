//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main(){
    int n, sum = 0, odd = 1;

    printf("Enter The Value Of n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        sum += odd;
        odd += 2;
    }

    printf("%d\n", sum);
    return 0;
}