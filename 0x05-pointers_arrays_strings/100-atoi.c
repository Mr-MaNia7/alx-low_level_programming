#include "main.h"

/**
 * _atoi - Converts string to integer
 * @s: String to be converted
 * Return: Converted int or 0
 */
int _atoi(char *s)
{
	int idx, len, num, con;

	len = 0;
	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	num = 0;
	for (idx = 0; idx < len; idx++)
	{
		con = s[idx];
		num = num * 10 + (con - 48);
	}
	return (num);
	return (0);
}
