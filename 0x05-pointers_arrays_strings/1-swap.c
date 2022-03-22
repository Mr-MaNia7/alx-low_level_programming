#include "main.h"

/**
 * swap_int - swaps 2 integer values
 * @a: First integer
 * @b: Second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
