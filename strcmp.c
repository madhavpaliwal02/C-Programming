#include <stdio.h>
#include <conio.h>
void main()
{
    char a[10], b[10];
    int i = 0;
    printf("enter name\n");
    scanf("%s", a);
    printf("\n enter a name\n");
    scanf("%s", b);
    i = strcmp(a, b);
    if (i == 0)
    {
        printf("\n strings are equal");
    }
    else
    {
        printf("\n strings are unequal");
    }
    getch();
}