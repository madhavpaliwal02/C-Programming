#include <stdio.h>
#include <conio.h>
int fact(int x)
{
    int y = 0;
    if (x == 1)
        return 1;
    else
        y = x * fact(x - 1);
    return y;
}
void main()
{
    int no, i = 0;
    printf("Enter the no\n");
    scanf("%d", &no);
    i = fact(no);
    printf("The factorial of no is %d\n", i);
    getch();
}