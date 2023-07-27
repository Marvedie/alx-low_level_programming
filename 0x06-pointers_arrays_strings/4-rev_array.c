#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @arr: Array to be reversed.
 * @size: Number of elements in the array.
 */
void reverse_array(int *arr, int size)
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j > 0; j--)
        {
            temp = *(arr + j);
            *(arr + j) = *(arr + (j - 1));
            *(arr + (j - 1)) = temp;
        }
    }
}
