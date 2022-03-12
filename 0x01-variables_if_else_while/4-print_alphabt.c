#include <stdio.h>
/** 
* main - entry point
* Return: program finished
*/
int main(void)
{
	int i;

	for (i=97; i < 97 + 26; i++)
	{
		if (i == 101 || i == 97 + 17)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
