#include <stdio.h>
#include <conio.h>
void main()
{
    int a=10, *p;
    p=&a;
    p++;     //or ++p,(*p)++ address value of p will be incremented by four
    printf("%d %d %d %d", a, &a, p, *p);
    getch();
}