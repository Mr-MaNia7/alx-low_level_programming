#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
* Return: program finished
*/
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastdigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdigit);
	}
	printf("\n");
	return (0);
}
