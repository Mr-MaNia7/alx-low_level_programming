#include "main.h"

/**
* _strcat - Concatenates two strings
* @src: The string to be appended
* @dest: The string to be appended on
* Return: Pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int desti, srci;

	desti = 0;
	while (dest[desti] != '\0')
	{
		desti++;
	}

	srci = 0;
	while (src[srci] != '\0')
	{
		desti++;
		dest[desti] = src[srci];
		srci++;
	}

	dest[desti + 1] = '\0';
	return (dest);
}
