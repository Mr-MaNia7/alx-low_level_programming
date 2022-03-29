#include "main.h"

/**
 * _memset - Changes memory with constant byte b
 * @s: Memory area
 * @b: Constant byte
 * @n: Number of bytes to be filled by b
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s++ = (unsigned char)b;
	}
	return (s);
}
