#include "main.h"

/**
 * rev_string - Reverses string
 * @s: Character of strings to be reversed
 * Return: Void
 */
void rev_string(char *s)
{
	int len, idx;
	char *end_ptr, *begin_ptr, ch;

	len = 0;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	begin_ptr = s;
	end_ptr = s;
	for (idx = 0; idx < len - 1; idx++)
		end_ptr++;
	for (idx = 0; idx < len / 2; idx++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
}
