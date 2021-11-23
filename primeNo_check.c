#include <stdio.h>
#include <conio.h>
void main()
{
    int x, c = 0;
    printf("Enter a no");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        printf("\n%d is prime no", x);
    }
    else
    {
        printf("\n%d is not a prime no", x);
    }
    getch();
}