#include <stdio.h>
#include <conio.h>
void main()
{
    int A[3][3], B[3][3], i, j, k, C[3][3], t;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the elements of A\n");
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the elements of B\n");
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            t = 0;
            for (int k = 0; k < 3; k++)
            {
                t = t + A[i][k] * B[k][j];
            }
            C[i][j] = t;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The result is %d\n", C[i][j]);
        }
    }
    getch();
}