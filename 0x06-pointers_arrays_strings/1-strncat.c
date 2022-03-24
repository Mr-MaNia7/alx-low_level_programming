#include "main.h"

/**
* _strncat - Concatenates two strings with n numbers
* @src: The string to be appended
* @dest: The string to be appended on
* @n: The number of characters to append
* Return: Pointer to dest
*/
char *_strcat(char *dest, char *src, int n)
{
	int desti, srci;

	desti = 0;
	while (dest[desti] != '\0')
	{
		desti++;
	}

	for (srci = 0; srci < n && src[srci] != '\0'; srci++)
	{
		desti++;
		dest[desti] = src[srci];
	}

	dest[desti + 1] = '\0';
	return (dest);
}
