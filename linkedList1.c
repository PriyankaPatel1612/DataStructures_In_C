#include<stdio.h>
#include<stdlib.h>

/*struct node
{
    int data;
    struct node *add;
};

struct node *start=NULL, *temp, *new, *prev, *next;

void create();
void insert();
void Delete();
void display();
void main()
{
   int ch;
   do{
   printf("\n------------LINKED LIST------------\n");
   printf("Press 1 for CREATE \n");
   printf("Press 2 for INSERT \n");
   printf("Press 3 for DELETE \n");
   printf("Press 4 for DISPLAY \n");
   printf("Press 5 for EXIT \n");
   scanf("%d", &ch);

   switch(ch)
   {
    case 1: create();break;
    case 2: insert();break;
    case 3: Delete();break;
    case 4: display();break;
    case 5: printf("Exited!");break;
    default : printf("Invalid choice!");
   }
 }while(ch!=5);
}

void create()
{
    int n;
    char ch;
    printf("Enter a number: ");
    scanf("%d", &n);
    start = (struct node *)malloc(sizeof(struct node));
    start->data=n;
    start->add=NULL;
    temp=start;
    printf("To add more element in the list press Y \n");
    scanf(" %c", &ch);

    while(ch=='Y' || ch=='y')
    {
        printf(" Enter next value: ");
        scanf("%d", &n);
        new = (struct node *)malloc(sizeof(struct node));
        new->data=n;
        new->add=NULL;
        temp->add=new;
        temp=new;
        printf("To add more data element press Y \n");
        scanf(" %c", &ch);

    }
}

void insert()
{
    int n, position, i=1, count=0;
    if(start==NULL)
    {
        printf("List not created");
    }
    else
    {
        printf("Enter a value");
        scanf("%d", &n);
        new=(struct node *)malloc(sizeof(struct node));
        new->data=n;
        new->add=NULL;
        printf("Enter a position");
        scanf("%d", &position);
        if(position==1)
        {
            new->add=start;
            start=new;
        }
        else
        {
            temp=start;
            while(temp!=NULL)
            {
                count++;
                temp=temp->add;
            }
            if(position>count+1)
            {
                printf("Invalid position");
            }
            else if(position==count+1)
            {
                temp=start;
                while (temp->add!=NULL)
                {
                    temp=temp->add;
                }
                temp->add=new;
                
            }
            else
            {
                next=start;
                while(i<position)
                {
                    prev=next;
                    next=next->add;
                    i++;
                }
                prev->add=new;
                new->add=next;

            }
        }

    }

}


void display()
{
    if(start==NULL)
    {
        printf("List not created, create list first");
    }
    else{
        temp=start;
        while (temp!=NULL)
        {
            printf("%d\t", temp->data);
            temp=temp->add;
        }
    }
}

void Delete(){}
*/

struct node{
    int data;
    struct node *add;
};

struct node *start=NULL, *temp, *prev, *next, *New;

void create();
void insert();
void display();
void Delete();

void main()
{
    int choice;
  do{
    printf("--------Linked List--------\n");
    printf("Press 1 for CREATE\n");
    printf("Press 2 for INSERT\n");
    printf("Press 3 for DISPLAY\n");
    printf("Press 4 for DELETE\n");
    printf("Press 5 for EXIT\n");
    printf("Press Here= ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: create(); break;
        case 2: insert(); break;
        case 3: display(); break;
        case 4: Delete(); break;
        case 5: printf("Exit\n"); break;
        default : printf("Invalid choice!\n");break;
    }
   }while(choice!=5);
   
}

void create()
{
     int n; 
     char ch;
     printf("Enter the value: \n");
     scanf("%d",&n);
     start=(struct node *)malloc(sizeof(struct node));        
     start->data=n;
     start->add=NULL;
     temp=start;
     printf("To add more element press Y: ");
     scanf(" %c", &ch);

     while(ch=='Y' || ch=='y')
     {
        printf("\nEnter the value: ");
        scanf("%d",&n);
        New=(struct node *)malloc(sizeof(struct node));
        New->data=n;
        New->add=NULL;
        temp->add=New;
        temp=New; 
        printf("\nTo add more element press Y: ");
        scanf(" %c", &ch); 
     }
     

}

void insert()
{
  int position,n,count=0,i=1;
  if(start==NULL)
  {
    printf("Node is not created, create node first!\n");
  }
  else{
    printf("Enter the value: ");
    scanf("%d",&n);
    New=(struct node *)malloc(sizeof(struct node()));
    New->data=n;
    New->add=NULL;
    printf("\nEnter the position: ");
    scanf("%d",&position);

    if(position==1)
    {
      New->add=start;
      start=New;
    }
    else{
        temp=start;
        while(temp!=NULL)
        {
            count++;
            temp=temp->add;
        }

        if(position>count+1)
        {
            printf("Invalid Position!\n");
        }
        else if(position==count+1)
        {
            temp=start;
            while(temp->add!=NULL)
            {
              temp=temp->add;
            }
            temp=New->add;
        }
        else{
            next=start;
            while(i<position)
            {
                prev=next;
                next=next->add;
                i++;
            }
            prev->add=New;
            New->add=next;
        }
    }
  }
}

void display()
{
  if(start==NULL)
  {
    printf("List is not created, create list first!\n");
  }
  else
  {
   temp=start;
   while(temp!=NULL)
   {
    printf("%d\t\n",temp->data);
    temp=temp->add;
   }
  }
}


void Delete()
{
    int position,count=0,i=1;
  if(start==NULL)
  {
    printf("\nList is not created, create list first!");
  }
  else
  {
    printf("Enter the position: ");
    scanf("%d",&position);

    if(position==1)
    {
        temp=start;
        start=start->add;
        printf("Deleted data=%d \n", temp->data);
        free(temp);
    }
    else{
        temp=start;
        while(temp!=NULL)
        {
            count++;
            temp=temp->add;
        }
        if(position>count)
        {
            printf("\nInvalid choice!");
        }
        else if(position==count)
        {
            next=start;
            while(next->add!=NULL)
            {
                prev=next;
                next=next->add;
            }
            printf("Deleted data=%d \n", next->data);
            free(next);
            prev->add=NULL;
        }
        else
        {
            next=start;
            while(i<position)
            {
                prev=next;
                next=next->add;
                i++;
            }
            temp=next;
            next=next->add;
            printf("Deleted data=%d \n", temp->data);
            free(temp);
            prev->add=next;
        }
    }
  }
}