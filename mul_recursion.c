#include <stdio.h>
#include <conio.h>
int sum(int n)
{
    int z=n;
    if(z==1)
    return 1;
    else
    return z*sum(z-1);
}
void main()
{
    int l,s=0;
    printf("Enter the no upto multiply is displayed\n");
    scanf("%d", &l);
    s=sum(l);
    printf("The multiply of %d natural no is %d",l,s);
    getch();
}
