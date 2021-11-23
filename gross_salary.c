#include <stdio.h>
#include <conio.h>
void main()
{
    int bs, gs;
    printf("enter the basic salary");
    scanf("%d", &bs);
    gs = bs + bs *.4+.2*bs;
    printf("gross salary is %d",gs);
    getch();
}