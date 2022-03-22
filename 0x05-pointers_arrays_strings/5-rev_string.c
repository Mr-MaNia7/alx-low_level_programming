#include "main.h"

/**
 * rev_string - Reverses string
 * @s: Character of strings to be reversed
 * Return: Void
 */
void rev_string(char *s)
{
	int len, idx;

	len = 0;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	idx = len -1;
	char idm[idx];

	idm = s;
	while (len > 0)
	{
		len--;
		idm[idx] = s[len];
	}
	s = idm;
}
