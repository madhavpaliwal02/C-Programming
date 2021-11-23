#include <stdio.h>
#include <conio.h>
void main()
{
    int n[5],i,j,t;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter no\n");
        scanf("%d",&n[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Befor sorting : %d\n",n[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++) 
        {
            if (n[i]>n[j])
            {
                t=n[i];
                n[i]=n[j];
                n[j]=t;
            }
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("After sorting : %d\n",n[i]);
    }
    getch();
}