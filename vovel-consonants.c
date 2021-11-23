#include <stdio.h>
#include <conio.h>
int main()
{ 
char x;
printf("\nenter an alphabet");
scanf("%c", &x);
switch (x)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
    printf("\n it is vovel");
    break;
default:
    printf("\n it is consonant");
}
getch();
}