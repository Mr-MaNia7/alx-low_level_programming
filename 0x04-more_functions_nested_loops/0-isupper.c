#include "main.h"

/**
 * _isupper - checks uppercase characters
 * @c: character to be checked
 * Return: 1 if uppercase, or 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 65 + 26)
		return (1);
	else
		return (0);
}
