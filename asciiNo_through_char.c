#include <stdio.h>
#include <conio.h>
void main()
{
    char a;
    printf("Enter a character\n");
    scanf("%c", &a);
    if (a >= 48 && a <= 57)
    {
        printf("\nascii no of %c character is %d", a, a);
    }
    else if (a >= 65 && a <= 90)
    {
        printf("\nascii no of %c character is %d", a, a);
    }
    else if (a >= 97 && a <= 122)
    {
        printf("\nascii no of %c character is %d", a, a);
    }
    else
    {
        printf("\n it is a special character");
    }
    getch();
}