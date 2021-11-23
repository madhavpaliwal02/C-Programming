#include <stdio.h>
#include <conio.h>
void main()
{
    int rem[20],i=0,j;
    long int n;
    printf("Enter the no in decimal ns\n");
    scanf("%ld", &n);
    while (n > 0)
    {
        rem[i] = n % 8;
        n = n / 8;
        i++;
    }
    printf("Conversion in decimal is :");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", rem[j]);
    }
    getch();
}