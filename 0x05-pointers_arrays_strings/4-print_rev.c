#include "main.h"

/**
 * print_rev - Prints as string in a reverse order
 * @s: Character of arrays to be entered
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = 0;

	while (len >= 0)
	{
		if (s[len] == 0)
			break;
		len++;
	}

	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
