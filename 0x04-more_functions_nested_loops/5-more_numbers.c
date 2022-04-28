#include "main.h"

/**
 * more_numbers - prints 0 - 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int c = 0, d;

	while (c < 10)
	{
		_putchar('\n');
		
		d = 0;
		while (d <= 14)
		{
			_putchar(d + '0');
			d++;
		}
		c++;
	}
	_putchar('\n');
}
