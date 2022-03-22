#include "main.h"

/**
 * print_rev - Prints as string in a reverse order
 * @s: Character of arrays to be entered
 * Return: void
 */
void print_rev(char *s)
{
	int idx, len;

	len = _strlen(s);
	for (idx = len; idx < 0; idx--)
	{
		_putchar(s[idx]);
	}
	_putchar('\n');
}
