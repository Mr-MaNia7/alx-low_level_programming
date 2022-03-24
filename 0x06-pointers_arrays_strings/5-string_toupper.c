#include "main.h"

/**
 * string_toupper - changes lowercases to uppercase
 *
 * Return: Pointer to char
 */
char *string_toupper(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if ((int)(str[idx]) <= 122 && (int)(str[idx]) >= 97)
			str[idx] = (char) ((int)(str[idx]) - 32);
		idx++;
	}
	return (str);
}
