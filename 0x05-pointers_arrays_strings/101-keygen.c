#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always password
 */
int main(void)
{
	srand(time(0));
	int pwd;
	pwd = rand();
	return (pwd);
}
