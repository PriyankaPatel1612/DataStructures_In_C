//return by value

int add(int,int);

void main()
{
    int a,b,c;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);
    c=add(a,b);              //a and b are arguments
    printf("sum=%d", c);
    getch();
}

int add(int a, int b)           //here a and b are parameters 
{
    int c;
    c=a+b;
    return c;           //return by value
}