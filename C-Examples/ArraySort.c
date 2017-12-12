/**
 * C program to sort elements of array in ascending order
 */

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int array[MAX_SIZE];
    int size;
    int i, j, temp;

    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }

    for(i=0; i<size; i++)
    {
        /* 
         * Place the currently selected element array[i]
         * to its correct place.
         */
        for(j=i+1; j<size; j++)
        {
            /* 
             * Swap if currently selected array element
             * is not at its correct position.
             */
            if(array[i] > array[j])
            {
                temp     = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    /* Print the sorted array */
    printf("\nElements of array in sorted ascending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}