#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, sum;
    int *ptr;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }

    ptr = &a[0][0];

    printf("Row sums:\n");
    for(i = 0; i < r; i++)
    {
        sum = 0;
        for(j = 0; j < c; j++)
            sum += *(ptr + i*c + j);

        printf("Row %d = %d\n", i+1, sum);
    }

    printf("Column sums:\n");
    for(j = 0; j < c; j++)
    {
        sum = 0;
        for(i = 0; i < r; i++)
            sum += *(ptr + i*c + j);

        printf("Column %d = %d\n", j+1, sum);
    }

    return 0;
}