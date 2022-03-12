#include <stdio.h>
/**
* main - entry point
* Return: program finished
*/
int main(void)
{
	int i;

	for (i = 97; i < 97+26 ; i++)
		putchar(i);
	putchar('\n');
	return 0;
}
