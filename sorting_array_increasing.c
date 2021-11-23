#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the elements\n");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        int t = 0;
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("After sorting :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }

    getch();
}