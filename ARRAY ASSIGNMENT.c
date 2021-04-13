#include<stdio.h>

int main()
{
    int size, sum = 0, i, array[9];

    printf("Size of array: ");
    scanf("%d", &size);

    printf("\nEnter %d integer(s) \n", size);

    for(i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("\nSum = %d\n", sum);
    return 0;
}
