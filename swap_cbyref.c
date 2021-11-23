#include <stdio.h>
#include <conio.h>
swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void main()
{
    int a, b;
    printf("Enter two no.\n");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("\n After swap a is %d & b is %d",a,b);
    getch();
}