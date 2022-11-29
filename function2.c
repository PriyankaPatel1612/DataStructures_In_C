//addind two no.s using functions using global variable

void add();

int a,b,c;             //global variable
void main()
{
 printf("Enter two values \n");
 scanf("%d %d", &a, &b);
 add();
 printf("sum=%d", c);
 getch();
}

void add()
{
    c=a+b;
}