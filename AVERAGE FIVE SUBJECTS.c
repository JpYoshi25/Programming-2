#include <stdio.h>
int main()
{
    float Math,Science,Filipino,English,PE,sum,average;

    printf("Enter the Grades");
    printf("\nMath:");
    scanf("%f",&Math);
    printf("Science:");
    scanf("%f",&Science);
    printf("Filipino:");
    scanf("%f",&Filipino);
    printf("English:");
    scanf("%f",&English);
    printf("PE:");
    scanf("%f",&PE);

    sum= Math+Science+Filipino+English+PE;
    average=sum/5;
    
    printf("Total: %.2f", sum);
    printf("\nThe average is:  %.2f", average);
    return 0;
}
