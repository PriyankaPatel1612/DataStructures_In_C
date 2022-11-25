#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10, *p;
    p=&a;
    a++;     //or ++a,++*p
    printf("%d %d %d %d", a, &a, p, *p);
    getch();
}