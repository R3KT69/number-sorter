#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int printArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}

int ascender(int array[], int length)
{
    for (int j = 0; j < length-1; j++)
    {
        for (int i = 0; i < length-1; i++)
        {
            if (array[i] > array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }

    printArray(array, length);
}

int descender(int array[], int length)
{
    for (int j = 0; j < length-1; j++)
    {
        for (int i = 0; i < length-1; i++)
        {
            if (array[i] < array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }

    printArray(array, length);
}

int main(int argc, char const *argv[])
{
    int y, order;

    printf("In which order do you want to arrange? [0/1] for [Ascending/Descending]: ");
    scanf("%d", &order);

    printf("How many numbers do you want to arrange: ");
    scanf("%d", &y);

    int x[y];

    for (int i = 0; i < y; i++)
    {
        printf("Enter number: ");
        scanf("%d", &x[i]);
    }

    if (order == 0)
    {
        ascender(x, y);
    }
    else if (order == 1)
    {
        descender(x, y);
    }

    getch();

    return 0;
}
