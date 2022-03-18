#include "main.h"

/**
 * more_numbers - print more numbers
 *
 * Return: numbers up to 14 10 times
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
	for (j = 48; j < 58; j++)
		_putchar(j);
	for (k = 53; k < 58; k++)
		_putchar('0' + k + 5);
	_putchar('\n');
	}
}
