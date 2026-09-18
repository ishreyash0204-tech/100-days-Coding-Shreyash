//Perform diagonal traversal of a matrix.
#include<stdio.h>
int main() {
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for(int d = 0; d < r + c - 1; d++)
    {
        if(d % 2 == 0)
        {
            int i = (d < r) ? d : r - 1;
            int j = d - i;

            while(i >= 0 && j < c)
            {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        }
        else
        {
            int j = (d < c) ? d : c - 1;
            int i = d - j;

            while(i < r && j >= 0)
            {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}