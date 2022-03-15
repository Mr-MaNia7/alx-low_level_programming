#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - prints lowercase alphabets
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
