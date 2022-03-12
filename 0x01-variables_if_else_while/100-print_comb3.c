#include <stdio.h>
/**
* main - entry point
* Return: program finished
*/
int main(void)
{
	int i, j, unique_sum [20];

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i == j)
				continue;
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
