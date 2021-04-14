
#include<stdio.h>


int main()
{
    int account[3][2]={
    {11234,3211},
    {56789,8765},
    {12345,4321}};
    int idnum,pin;

    printf("Enter your ID number: ");
    scanf ("%d", &idnum);
    printf("Enter your password : ");
    scanf ("%d", &pin);

    if (idnum==account[0][0])
    {
        if(pin==pass[0][1])
        {
            printf("\nYou have successfully logged in\n\n ID:%d",idnum);
        }
        else
        printf("\nInvalid ID/PIN!");
    }
    else if (idnum==account[1][0])
    {
        if (pin==pass[1][1])
        {
            printf("\nYou have successfully logged in\n\n ID:%d",idnum);
        }
        else
        printf("\nInvalid ID/PIN!");
    }
    else if (idnum==account[2][0])
    {
        if (pin==pass[2][2])
        {
            printf("\nYou have successfully logged in\n\n ID:%d",idnum);
        }
        else
        printf("\nInvalid ID/PIN!");
    }
    else
        printf("\nInvalid ID/PIN!");
    return 0;
}
