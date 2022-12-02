#define maxsize 10
int stack[maxsize], top=-1;
void push();
void pop();
void display();

void main()
{
  int ch;
  do
  {
   printf("\n------------STACK------------\n");
   printf("Press 1 for PUSH \n");
   printf("Press 2 for POP \n");
   printf("Press 3 for DISPLAY \n");
   printf("Press 4 for EXIT \n");
   scanf("%d", &ch);
  
   switch(ch)
   {
    case 1: push();break;
    case 2: pop();break;
    case 3: display();break;
    case 4: break;
    default : printf("Invalid choice!");
   }
  }
  while (ch!=4);
}

void push()
{
  int n;
  if(top==maxsize-1)
  {
    printf("Stack overflow\n");
  }
  else
  {
    printf("Enter a value: ");
    scanf("%d",&n);
    top++;
    stack[top]=n;
  }
}

void pop()
{
 if(top==-1)
 {
    printf("stack underflow\n");
 }
 else
 {
    printf("Deleted data=%d\n", stack[top]);
    top--;
 }
}

void display()
{
  int i;
  if(top==-1)
  {
    printf("stack underflow \n");
  }
  else
  {
    printf("Stack elements: ");
    for(i=0 ; i<=top ; i++)
    {
        printf("%d \t", stack[i]);
    }
  }
}