#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @arr: array to iterate over
 * @sz: size of the array
 * @act: pointer to function used
 */
void array_iterator(int *arr, size_t sz, void (*act)(int))
{
	unsigned int idx;

	if (!arr || !act)
		return;

	for (idx = 0; idx < sz; idx++)
		act(arr[idx]);
}
