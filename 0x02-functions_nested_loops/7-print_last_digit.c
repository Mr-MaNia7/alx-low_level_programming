#include "main.h"
/**
 * print_last_digit - prints the last digit of numbers
 * @n: number to be calculated
 * Return: last digit
 */
int print_last_digit(int n)
{
	int res;

	res = _abs(n) % 10;
	_putchar('0' + res);
	return (res);
}

#include "6-abs.c"
