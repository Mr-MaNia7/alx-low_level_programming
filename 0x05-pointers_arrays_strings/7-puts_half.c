#include "main.h"

/**
 * puts_half - Prints second half of a string
 * @str: Character of strings entered
 * Return: Void
 */
void puts_half(char *str)
{
	int len, idx, l;

	len = 0;
	while (len >= 0)
	{
		if (str[len] == '\0')
			break;
		len++;
	}

	l = len;
	if (l % 2 == 0)
	{
		for (idx = l / 2; idx <= l; idx++)
			_putchar(str[idx]);
	}

	else
	{
		for (idx = (l + 1) / 2; idx <= l; idx++)
			_putchar(str[idx]);
	}
	_putchar('\n');
}
