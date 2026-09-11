//Insert an element in a sorted array at the appropriate position.
#include<stdio.h>
int main() {
    int n, i, element;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &element);
    i = n - 1;
    while(i >= 0 && arr[i] > element)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = element;
    printf("Array after insertion: ");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}