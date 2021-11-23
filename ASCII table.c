#include <stdio.h>
#include <conio.h>
void main()
{
    for (int i = 32; i <= 47; i++) //special character
    {
        printf("The ASCII no of %c character is %d\n", i, i);
    }
    for (int i = 48; i <= 57; i++) // 0-9
    {
        printf("The ASCII no of %c character is %d\n", i, i);
    }
    for (int i = 58; i <= 64; i++) //special character 
    {
        printf("The ASCII no of %c character is %d\n", i, i);
    }
    for (int i = 65; i <= 90; i++) //capital alphabet
    {
        printf("The ASCII no of %c character is %d\n", i, i);
    }
    for (int i = 91; i <= 96; i++) //special characters
    {
        printf("The ASCII no of %c character is %d\n", i, i);
    }
    for (int i = 97; i <= 122; i++) //small alphabets
    {
        printf("The ASCII no of %c character is %d\n", i, i);
    }
    for (int i = 122; i <= 127; i++) //special character
    {
        printf("The ASCII no of %c character is %d\n", i, i);
    }
    getch();
}