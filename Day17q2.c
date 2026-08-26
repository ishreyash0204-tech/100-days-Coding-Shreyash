//Write a program to check if a number is prime.
#include<stdio.h>
int main() {
    int n,i,prime = 1;

    printf("Enter A Number To Check If It Is Prime:");
    scanf("%d",&n);

    if(n <= 1)
    {                     
        prime = 0;
    } 
    else{                           
        for(i = 2; i < n; i++)
        { 
            if(n % i == 0){         
                prime = 0;
                break;              
            }
        }
    }

    if(prime)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;
}