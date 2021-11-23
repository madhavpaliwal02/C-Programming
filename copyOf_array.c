#include <stdio.h>
#include <conio.h>
void main()
{
    float a[] = {1, 2, 3, 4, 5}, b[5];
    for (int i = 0; i <= 4; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i <= 4; i++)
        {
            printf("\n A %.2f is copy into B %.2f", a[i], b[i]);
        }
            getch();
}