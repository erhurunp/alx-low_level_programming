#include "main.h"

/**
 * times_table - prints n multiplication
 * table starting with zero
 * @n: n is an integer
 *
 * Return: void
 */

void times_table(int n)
{
	int horizontal, vertical, product;

	if (n >= 0 && n < 15)
	{
		horizontal = 0;
		while (horizontal <= 9)
		{
			vertical = 0;
			while (vertical <= 9)
			{
				product = horizontal * vertical;

				if (vertical == 0)
				{
					_putchar('0');
				}
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
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				vertical++;
			}
			_putchar('\n');
			horizontal++;
		}
	}
}
