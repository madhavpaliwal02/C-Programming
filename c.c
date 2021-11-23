#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int a[5], x = 1, temp = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d no\n", x);
        scanf("%d", &a[i]);
        x++;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1 + i; j < 5; j++)
        {
            if (a[i] < a[j])
            {
            }
            else
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("After sorting the value is :- \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    getch();
}