#include <stdio.h>
#include <conio.h>
void main()
{
    int m[5], sum = 0, j = 1;
    float avg = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter mark of sub %d\n", j);
        scanf("%d", &m[i]);
        j++;
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + m[i];
    }
    avg = sum /(float) 5;
    printf("The sum is %d and average is %.2f", sum, avg);
    getch();
}