#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    int *p = &a;
    int *ptr = &p;
    printf("enter a no\n");
    scanf("%d", &a);

    printf("the value of a is %d\n", a);
    printf("the value of a to p is %d\n", *p);
    printf("the value of p is %p\n", p);
    printf("the value of p to ptr is %p\n", *ptr);

    printf("the add of a is %p\n", &a);
    printf("the add of a is %x\n", &a);
    printf("the add of a to p is %p\n", p);
    printf("the add of p is %p\n", &p);
    printf("the add of p is %x\n", &p);
    printf("the add of p to ptr is %p\n", ptr);
    printf("the add of ptr is %p\n", &ptr);
    printf("the add of ptr is %x\n", &ptr);

    getch();
}