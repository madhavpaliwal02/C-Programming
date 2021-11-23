#include <stdio.h>
#include <conio.h>
void main()
{
    int n, rem[20],i=0,j;
    printf("Enter the no in decimal ns\n");
    scanf("%d", &n);
    while (n > 0)
    {
        rem[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Conversion in binary is :");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", rem[j]);
    }
    getch();
}