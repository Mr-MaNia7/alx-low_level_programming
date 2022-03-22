#include "main.h"

/**
 * puts_half - Prints second half of a string
 * @str: Character of strings entered
 * Return: Void
 */
void puts_half(char *str)
{
	int len, idx;

	len = 0;
	while(len >= 0)
	{
		if (str[len] == '\0')
			break;
		len++;
	}
	if (len % 2 == 0)
	{
		for (idx = len / 2; idx <= len; idx++)
			_putchar(str[idx]);
	}
	else
	{
		for (idx = (len - 1) / 2; idx <= len; idx++)
			_putchar(str[idx]);
	}
	_putchar('\n');
}
