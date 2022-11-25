#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10, *p;
    p=&a;
    printf("%d %d %d %d", a, &a, p, *p);
    getch();
}