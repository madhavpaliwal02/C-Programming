#include <stdio.h>
#include <conio.h>
int fabo(int x)
{
    int a = 0, b = 1, c = 0;
    for (int y = 2; y < x; y++)
    {
        c = a + b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
}
void main()
{
    int no,x=0,y=1;
    printf("Enter the no\n");
    scanf("%d", &no);
    printf("%d\n",x);
    printf("%d\n",y);
    fabo(no);
    getch();
}