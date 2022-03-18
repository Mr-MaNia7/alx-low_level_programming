#include "main.h"

/**
 * print_diagonal - Prints diagonal wrt the number entered
 * @n: Integer to be entered
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\'+'0');
	}
	_putchar('\n');
}
