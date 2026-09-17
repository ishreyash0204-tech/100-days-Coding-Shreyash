//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int a[100][100], r, c;
    int i, j, flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        for(j = i + 1; j < r; j++)
        {
            if(a[i][i] == a[j][j])
            {
                flag = 0;
            }
        }
    }
    if(flag == 1)
        printf("True");
    else
        printf("False");
    return 0;
}