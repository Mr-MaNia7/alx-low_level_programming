#include "main.h"

/**
 * _strcpy - Copies String
 * @dest: Destination buffer
 * @src: Source buffer
 * Return: pointer to character of dest
 */
char *_strcpy(char *dest, char *src)
{
	int idx, len;

	len = 0;
	while (len >= 0)
	{
		if (src[len] == '\0')
			break;
		len++;
	}

	for (idx = 0; idx <= len; idx++)
	{
		if (idx == len)
			dest[len] = '\0';
		else
			dest[idx] = src[idx];
	}
	return (dest);
}
