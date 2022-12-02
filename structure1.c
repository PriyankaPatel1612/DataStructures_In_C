//WAP to get information of student roll no, name, percentage and print the same on console using structure
struct student
{
    int roll;
    char name[10];
    float p;
};

struct student s1;

void main()
{
    
    printf("Enter roll no. :");
    scanf ("%d", &s1.roll);
    printf("Enter name :");
    scanf ("%s", &s1.name);
    printf("Enter percentage :");
    scanf ("%f", &s1.p);


    printf("You have entered! \n");
    printf("Roll no. \t Name \t Percentage \n");
    printf("%d \t %s \t %f \n",s1.roll, s1.name, s1.p);
    getch();
}



