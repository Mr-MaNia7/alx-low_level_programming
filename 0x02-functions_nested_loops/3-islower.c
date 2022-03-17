#include "main.h"

/**
 * _islower - checks lower case alphabets
 * @c: the character to be checked
 * Return: 1 for lower case, and 0 otherwise
 */
int _islower(int c)
{
	if (c < 97 + 26 && c > 96)
		return (1);
	else
		return (0);
}
