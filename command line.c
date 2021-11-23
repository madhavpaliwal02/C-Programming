#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void main(int argc, char const *argv[])
{
    float a, b, c;
    char *op;
    if (argc != 4)
    {
        printf("usage : cmd operand1 op operand2");
        exit(1);
    }
    a = atof(argv[1]);
    b = atof(argv[3]);
    op = argv[2];
    if (strcmp(op, "+") == 0)
        c = a + b;
    else if (strcmp(op, "-") == 0)
        c = a - b;
    else if (strcmp(op, "*") == 0)
        c = a * b;
    else if (strcmp(op, "/") == 0)
        c = a / b;
    printf("%0.2f %s %0.2f = %0.2f", a, op, b, c);
    getch();
}