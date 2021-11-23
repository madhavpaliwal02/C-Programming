#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5]={1,2,3,4};
    printf("The reverse of an array is:\n");
    for (int i = 3; i < 5; i--)
    {
        printf("%d\n",a[i]);
    }
getch();
}