// call by value

void add(int,int);

void main()
{
    int a,b;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);
    add(a,b);              //a and b are arguments
    getch();
}

void add(int a, int b)           //here a and b are parameters 
{
    int c;
    c=a+b;
    printf("sum=%d",c);
}