//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include<stdio.h>
int main() {
    int arr[50], n, i;
    int curr_sum = 0, max_sum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max_sum = arr[0];

    for (i = 0; i < n; i++)
    {
        curr_sum += arr[i];

        if (curr_sum > max_sum)
        {
            max_sum = curr_sum;
        }

        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }

    printf("%d", max_sum);

    return 0;
}
