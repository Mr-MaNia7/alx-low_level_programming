int _putchar(char c);
void print_alphabet(void);
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
