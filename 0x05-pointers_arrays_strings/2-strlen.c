#include "main.h"

/**
 * _strlen - Calculates string length
 * @s: Character entered
 * Return: Length in integer type
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while(len >= 0)
	{
		if(s[len] == '\0')
			break;
		len++;
	}
	return len;
}
