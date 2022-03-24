#include "main.h"

/**
 * reverse_array - Reverses content of an array
 * @a: Array to be reversed
 * @n: Length of the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int *beginptr, *endptr, idx, num;

	beginptr = a; /* points to beginning */
	endptr = a;
	for (idx = 0; idx < n - 1; idx++)
		endptr++; /* points to end */
	for (idx = 0; idx < n / 2; idx++)
	{
		num = *endptr;
		*endptr = *beginptr;
		*beginptr = num;
		beginptr++;
		endptr--;
	}
}
