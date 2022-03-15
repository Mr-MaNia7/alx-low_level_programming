#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - prints lower case alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	i=97;
	while(i < 97 + 26)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
