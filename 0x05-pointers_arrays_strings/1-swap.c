#include "main.h"
/**
 * swap_int - swaps the value of two integers"
 * a - first value to be swaped
 * b - the second value to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
