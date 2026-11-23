#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int recursiveMaximum(const int array[], int size);

int main(void)
{
    int a[SIZE] = { 12, 45, 7, 89, 23, 56, 94, 31, 68, 15 };
    int i;
    int max;

    printf("Array elements: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    max = recursiveMaximum(a, SIZE);

    printf("The maximum value in the array is: %d\n", max);

    system("pause");
    return 0;
}

int recursiveMaximum(const int array[], int size)
{
    int maxOfRest;

    if (size == 1)
    {
        return array[0];
    }

    maxOfRest = recursiveMaximum(array, size - 1);

    if (array[size - 1] > maxOfRest)
    {
        return array[size - 1];
    }
    else
    {
        return maxOfRest;
    }
}