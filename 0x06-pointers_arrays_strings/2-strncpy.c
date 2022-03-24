#include "main.h"

/**
* _strncpy - Concatenates two strings with n numbers
* @src: The string to be appended
* @dest: The string to be appended on
* @n: The number of characters to append
* Return: Pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int idx, lensrc;

	lensrc = 0;
	while(src[lensrc] != '\0')
	{
		lensrc++;
	}

	for (idx = 0; idx < n; idx++)
	{
		dest[idx] = src[idx];
	}

	if (idx
	dest[desti + 1] = '\0';
	return (dest);
}
