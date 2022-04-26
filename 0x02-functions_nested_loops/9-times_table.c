#include "main.h"

/**
 * times_table - prints the 9 multiplication
 * table
 *
 * Return: void
 */

void times_table(void)
{
	int horizontal, vertical, product, two_dig, one_dig;

	horizontal = 0;
	while (horizontal <= 9)
	{
		vertical = 0;
		while (vertical <= 9)
		{
			product = horizontal * vertical;
			two_dig = product / 10;
			one_dig = product % 10;

			if (vertical == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(one_dig + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(two_dig + '0');
				_putchar(one_dig + '0');
			}
			vertical++;
		}
		_putchar('\n');
		horizontal++;
	}
}
