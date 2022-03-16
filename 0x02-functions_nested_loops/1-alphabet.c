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
* print_alphabet - prints alphabets
*
* Return: void
*/
void print_alphabet(void)
{
	int i;
	
	for (i = 0; i < 97 + 26; i++)
	_putchar(i);
	_putchar('\n');
}
