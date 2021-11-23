#include <stdio.h>
#include <conio.h>
void main()
{
    int n1 = 0, n2 = 1, sum = 0, lim;
    printf("enter a limit upto which fab series is generated");
    scanf("%d", &lim);
    for (int i = 0; i < lim - 1; i++)
    {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    printf("the fab series upto %d is", lim);
    printf("\n %d\n %d",n1,n2);
    for (int i = 0; i < lim - 1; i++)
    {
        printf("\n %d", sum);
    }
    getch();
}