
#include<stdio.h>


int main()
{
    int account[3][2]={
    {11234,43211},
    {56789,98765},
    {12345,54321}};

    int pass[3][2]={
    {1123,4321},
    {5678,9876},
    {1234,4321}};
    int idnum,pin;

    printf("Enter your ID number: ");
    scanf ("%d", &idnum);
    printf("Enter your password : ");
    scanf ("%d", &pin);

    if (idnum==account[0][0])
    {
        if(pin==pass[0][0])
        {
            printf("\nYou have successfully logged in");
        }
        else
        printf("\nInvalid ID/PIN!");
    }
    else if (idnum==account[0][1])
    {
        if (pin==pass[0][1])
        {
            printf("\nYou have successfully logged in");
        }
        else
        printf("\nInvalid ID/PIN!");
    }
    else if (idnum==account[1][1])
    {
        if (pin==pass[1][1])
        {
            printf("\nYou have successfully logged in");
        }
        else
        printf("\nInvalid ID/PIN!");
    }
    else
        printf("\nInvalid ID/PIN!");
    return 0;
}
