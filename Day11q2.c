//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main() {
    float sellingprice,costprice,loss,profit;
    printf("Enter the Cost Price:");
    scanf("%f",&costprice); 
    printf("Enter the Selling Price:");
    scanf("%f",&sellingprice);

    if(sellingprice>costprice)
    {
        profit=sellingprice-costprice;
        printf("Profit=%.2f%%",(profit)/costprice*100);
    }
    else if(costprice>sellingprice)
    {
        loss=costprice-sellingprice;
        printf("loss=%.2f%%",(loss)/costprice*100);
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;

}