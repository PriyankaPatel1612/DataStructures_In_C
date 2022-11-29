//write a program to print first name,college name and city name and after every name print pyramid by using functions 

void pyramid();              //funtion declaration

void main()                  //main funtion
{
    printf("name \n");
    pyramid();                 //function calling
    printf("college name \n");
    pyramid();
    printf("city name \n");
    pyramid();
    getch();
}

void pyramid()
{
    int i,j;
    for(i=1 ; i<=5 ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("*");
        } printf("\n");
    }
}