#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints array
 * @a: Array to be printed
 * @n: Number of array elements to be printed
 * Return: Void
 */
void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		if (idx == n - 1)
		{
			printf("%d", a[idx]);
			break;
		}
		printf("%d, ", a[idx]);
	}
	printf("\n");
}
