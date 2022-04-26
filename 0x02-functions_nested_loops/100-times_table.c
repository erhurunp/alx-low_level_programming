#include "main.h"

/**
 * print_times_table - prints n multiplication
 * table starting with zero
 * @n: n is an integer
 *
 * Return: void
 */

void print_times_table(int n)
{
	int horizontal, vertical, product;

	if (n >= 0 && n < 15)
	{
		for (horizontal = 0; horizontal <= n; horizontal++)
		{
			for (vertical = 0; vertical <= n; vertical++)
			{
				product = horizontal * vertical;

				if (vertical == 0)
					_putchar('0');
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
