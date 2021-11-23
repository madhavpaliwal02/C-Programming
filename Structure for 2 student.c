#include <stdio.h>
#include <conio.h>
#include <string.h>
struct student
{
    char name[20];
    int age;
} s1, s2;

void main()
{
    struct student s1, s2;
    printf("Enter the name & age of the 1st students\n");
    scanf("%s %d", &s1.name, &s1.age);
    printf("Enter the name & age of the 2nd students\n");
    scanf("%s %d", &s2.name, &s2.age);
    printf("The name and age of the 1st student is %s & %d\n", s1.name, s1.age);
    printf("The name and age of the 2nd student is %s & %d\n", s2.name, s2.age);
    getch();
}