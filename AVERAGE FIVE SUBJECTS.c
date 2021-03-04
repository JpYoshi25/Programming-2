#include <stdio.h>
int main()
{
    int Math,Science,Filipino,English,PE,sum,average;

    printf("Math:");
    scanf("%d",&Math);
    printf("Science:");
    scanf("%d",&Science);
    printf("Filipino:");
    scanf("%d",&Filipino);
    printf("English:");
    scanf("%d",&English);
    printf("PE:");
    scanf("%d",&PE);

    sum= Math+Science+Filipino+English+PE;
    average=sum/5;

    printf("The average is %d", average);
}
