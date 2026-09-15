//Find the transpose of a matrix.
#include<stdio.h>
int main() {
    int a[10][10];
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose of the matrix:\n");
    for(j = 0; j < cols; j++)
    {
        for(i = 0; i < rows; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}