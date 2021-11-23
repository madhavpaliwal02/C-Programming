#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 3, *j, **k;
    j = &i;
    k = &j;
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);
    printf("the value of i is %d\n", **k);
    printf("the value of i is %d\n", *(&i));
    printf("the value of j is %d\n", j);
    printf("the value of j is %d\n", &i);
    printf("the value of j is %u\n", *(&j));
    printf("the value of j is %u\n", *k);
    printf("the value of k is %d\n", k);
    printf("the value of k is %d\n", &j);
    printf("the value of k is %u\n", *&(k));

    printf("the address of i is %u\n", &i);
    printf("the address of i is %u\n", j);
    printf("the address of i is %u\n", *k);
    printf("the address of j is %u\n", &j);
    printf("the address of j is %u\n", k);
    printf("the address of k is %u", &k);
    getch();
}
