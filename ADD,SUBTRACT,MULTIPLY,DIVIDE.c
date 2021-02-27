#include <stdio.h>

int main()
{
    int add,subtract,multiply;
    int num1,num2;
    float divide;

    printf("Enter the first number ");
    scanf("%d", &num1 );
    printf("Enter the second number ");
    scanf("%d", &num2 );

    add = num1 + num2;
    subtract= num1-num2;
    multiply= num1*num2;
    divide= (float) num1/num2;

    printf("\n sum = %d\n difference = %d\n product= %d\n quotient=%f", add,subtract,multiply,divide);

    return 0;
}
