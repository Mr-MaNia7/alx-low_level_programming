#include <stdio.h>
/**
* main - entry point
* Return: program finshed
*/
int main(void)
{
	int i;

	for ( i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
