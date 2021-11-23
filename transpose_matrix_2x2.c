#include <stdio.h>
#include <conio.h>
void main()
{
    int A[2][2] = {1, 2, 3, 4}, C[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
                C[i][j] = A[j][i];   
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    getch();
}