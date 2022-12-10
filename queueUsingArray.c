#define maxsize 10
int queue[maxsize], front=0, rear=-1;

void insert();
void Delete();
void display();
void main()
{
  int ch;
  do
  {
    printf("\n-----------Queue-----------\n");
    printf("Press 1 for INSERT \n");
    printf("Press 2 for DELETE \n");
    printf("Press 3 for DISPLAY \n");
    printf("Press 4 for EXIT \n");

    scanf("%d", &ch);

    switch (ch)
    {
    case 1: insert();break;
    case 2: Delete();break;
    case 3: display();break;
    case 4: break;
    default : printf("Invalid No.");
    }
   }while(ch!=4);

}

void insert()
{
    int n;
    if(rear==maxsize-1)
    {
        printf("Queue Overflow!");
    }
    else
    {
        printf("Enter the value: ");
        scanf("%d", &n);
        rear++;
        queue[rear]=n;
        
    }

}

void Delete()
{
    if(rear<front)
    {
        printf("Queue Underflow");
    }
    else{
        printf("Deleted data=%d",queue[front]);
        front++;
    }

}

void display()
{
    int i;
    if(rear<front)
    {
        printf("Queue Underflow");
    }
    else{
        for(i=front;i<=rear;i++)
        {
            printf("%d\t", queue[i]);
        }
    }

}

