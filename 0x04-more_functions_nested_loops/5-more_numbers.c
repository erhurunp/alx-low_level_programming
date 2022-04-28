#include "main.h"

/**
 * more_numbers - prints 0 - 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
			{
				_putchar((d / 10) + 48);
			}
			_putchar((d % 10) + 48);
		}
		_putchar('\n');
	}
}
