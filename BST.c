#include<stdio.h>
#include<stdlib.h>

struct tree
{
    struct tree *ladd;
    int data;
    struct tree *radd;
};

struct tree *root=NULL;

struct tree * create(struct tree *P, int n);
void inorder(struct tree *P);
void preorder(struct tree *P);
void postorder(struct tree *P);

void main()
{
    int n, ch;
    //clrscr();
    do{
    printf("-------Binary Search Tree-------\n");
    printf("Press 1 for CREATE node\n");
    printf("Press 2 for INORDER\n");
    printf("Press 3 for PREORDER\n");
    printf("Press 4 for POSTORDER\n");
    printf("Press 5 for EXIT\n");
    printf("Press Here: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:printf("\nEnter the value, or press 0 to exit\n");
               scanf("%d",&n);
               while(n!=0)
               {
                root=create(root,n);
                printf("Enter next value: ");
                scanf("%d",&n);
               }
               break;
        case 2:inorder(root);break;
        case 3:preorder(root);break;
        case 4:postorder(root);break;
        case 5:printf("\nExit!");break;
        default : printf("\nInvalid choice!"); break;
    }
    }while(ch!=5);
}

struct tree * create(struct tree *P, int n)
{
    if(P==NULL)
    {
        P=(struct tree *)malloc(sizeof(struct tree()));
        P->ladd=NULL;
        P->data=n;
        P->radd=NULL;
    }
    else
    {
        if(n>P->data)
        {
          P->ladd=create(P->ladd,n);
        }
        else if(n<P->data)
        {
          P->radd=create(P->radd,n);
        }
        else
        {
          printf("Duplicate elements are not allowed in BST");
        }
    }
    return(P);
}

void inorder(struct tree *P)
{
  if(P!=NULL)
   {
    inorder(P->ladd);
    printf("%d\t",P->data);
    inorder(P->radd);
  }
}

void preorder(struct tree *P)
{
    if(P!=NULL)
    printf("%d\t",P->data);
    preorder(P->ladd);
    preorder(P->radd);
}

void postorder(struct tree *P)
{
    postorder(P->ladd);
    postorder(P->radd);
    printf("%d\t",P->data);
}


