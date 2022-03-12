#include <stdio.h>

/**
* main - entry point
* Return: program finshed
*/

int main(void)
{
	int i;

	for (i = 48; ; i++)
	{
		putchar(i);
		if (i == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
