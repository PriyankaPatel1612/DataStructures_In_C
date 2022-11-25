#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10, *p, **q;
    p=&a;
    q=&p;
    printf("%d %d %d %d %d %d %d", a, &a, p, *p, q, *q, **q);
    getch();
    
}