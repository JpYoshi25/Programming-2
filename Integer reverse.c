#include <stdio.h>

int main()
{
    int num, realnum, remainder, reverse;


    printf("Enter an integer \n");
    scanf("%d", &num);

    realnum=num;
while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
 printf("The reversed number of %d is %d",realnum,reverse);
return 0;
}
