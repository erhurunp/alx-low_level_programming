#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: r is an integer
 *
 * Return: integer
 */

int print_last_digit(int r)
{
	int last_dig = r % 10;

	if (r < 0)
	{
		last_dig = last_dig * -1;
	}
	_putchar(last_dig + '0');
	return (last_dig);
}
