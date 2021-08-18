#include <stdio.h>
void main()
{
    int a[10][10], b[10][10], sum[10][10], i, j, row, col;
    printf("\nEnter the Row Size : ");
    scanf("%d", &row);
    printf("\nEnter the Column Size : ");
    scanf("%d", &col);

    printf("\nEnter the elements of First Matrix:\n\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter First_Matrix[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter the elements of Second Matrix:\n\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter Second_Matrix[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nThe Summation Matrix is:\n\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("  %d ", sum[i][j]);
        }
        printf("\n");
    }
}