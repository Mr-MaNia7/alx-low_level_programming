#include <stdio.h>
/**
* main - entry point
* Return: program finished
*/
int main (void)
{
	int i;

	for (i = 97 + 25; i >= 48; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
