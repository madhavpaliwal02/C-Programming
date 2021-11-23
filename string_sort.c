#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name[5][10], temp[5];
    int k = 1;
    for (int i = 0; i < 5; i++)
    {
        printf("enter name %d\n", k);
        scanf("%s", name[i]);
        k++;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("After sorting :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", name[i]);
    }

    getch();
}