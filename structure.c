#include<stdio.h>
#include<conio.h>
struct xen
{
    int age;
    char name;
};
void main()
{
    struct xen x[4][4];
    int *p=&x.age;
    printf("%d",p);
getch();
}