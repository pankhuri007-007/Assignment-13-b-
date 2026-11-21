#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;
    int (*ptr)[10];

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }

    ptr = a;

    printf("Transpose of matrix:\n");
    for(j = 0; j < c; j++)
    {
        for(i = 0; i < r; i++)
            printf("%d ", *(*(ptr + i) + j));

        printf("\n");
    }

    return 0;
}