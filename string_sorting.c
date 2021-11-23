#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name[5][10];
    int i, j, x, c = [5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d name\n", x);
        scanf("%s", &name[i]);
        x++;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(c, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], c);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n%s", name[i]);
    }
    
    getch();
}