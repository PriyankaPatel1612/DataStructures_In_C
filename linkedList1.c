#include<stdio.h>
#include<stdlib.h>

struct node
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
    case 5: break;
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

}

void Delete(){}
void display(){}