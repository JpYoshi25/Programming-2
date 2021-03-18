#include <stdio.h>

int main()
{
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    switch (number > 0)
    {

        case 1:
            printf("The integer is a positive number.");
        break;

        case 0:
            switch (number<0)
            {
                case 1:
                    printf("The integer is a negative number.");
                    break;
                default:
                    printf("The inputted data is invalid");
                    break;
            }


    }

    return 0;
}
