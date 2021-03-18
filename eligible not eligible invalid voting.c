#include <stdio.h>

int main (void)
{
   char name[50];
   int age ;

    printf("Enter your name: ");
    scanf("%30[^\n]s", name);

    name[50] = '\0';
    fflush(stdin);

    printf("Enter your age: ");
    scanf(" %d",&age);

    printf("\n\n Name: %s\n Age:%d",name,age);



        if(age<18)
            {
                printf("\n\tYou are not eligible for voting.");
                }
        if(age>=18)
            {
                printf("\n\tYou are eligible for voting.");
                }
        else
            {
                printf("\n\tInvalid Age, please try again.");
                }
        return 0;

}

