#include "main.h"

/**
 * puts2 - Prints even characters
 * @str: Character of strings to print
 * Return: Void
 */
void puts2(char *str)
{
	int idx;

	idx = 0;
	while (idx >= 0)
	{
		if (str[idx] == '\0')
			break;
		else if (idx % 2 == 0)
		{
			_putchar(str[idx]);
		}
		idx++;
	}
	_putchar('\n');
}
