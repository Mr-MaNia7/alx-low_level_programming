#include "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (c > b)
		{
			if (a > c)
				largest = a;
			else if (c > a)
				largest = c;
		}
	}
	else if (b > a)
	{
		if (a > c)
			largest = b;
		else if (c > a)
		{
			if (b > c)
				largest = b;
			else if (c > b)
				largest = c;
		}
	}

	return (largest);
}
