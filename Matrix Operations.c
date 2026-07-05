#include <stdio.h>

int main()
{
    int r, c, i, j;
    int A[10][10], B[10][10], Sum[10][10];

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("\nEnter elements of First Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of Second Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nFirst Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nSecond Matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Matrices:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
