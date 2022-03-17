#include <stdio.h>
#include "main.h"

/**
* print_alphabet - prints alphabets
*
* Return: void
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 97 + 26; i++)
	_putchar(i);
	_putchar('\n');
}
