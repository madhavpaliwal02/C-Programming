#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5], n = 1;
    for (int i = 0; i < 5; i++)
    {
        printf("enter the %d no.", n);
        scanf("%d", &a[i]);
        n++;
    }

    printf("the value of a[1] is %d \n", a[1]);
    printf("the address of a[1] is %d \n", &a[1]);
    printf("the address of a[1] is %d \n", a + 1);
    getch();
}
