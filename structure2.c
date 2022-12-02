//WAP to get information of 5 students and print the same in tabular format using structure
struct student
{
    int roll;
    char name[10];
    float p;
};

struct student s[5];

void main()
{
    int i;
    for(i=0 ; i<5 ; i++)
    {
    printf("Enter roll no. :");
    scanf ("%d", &s[i].roll);
    printf("Enter name :");
    scanf ("%s", &s[i].name);
    printf("Enter percentage :");
    scanf ("%f", &s[i].p);
    
    printf("You have entered! \n");
    
    }
     
     printf("Roll no. \t Name \t Percentage \n");

    for(i=0 ; i<5 ; i++)
    {
    printf("%d \t %s \t %f \n",s[i].roll, s[i].name, s[i].p);
    }
    getch();
}
