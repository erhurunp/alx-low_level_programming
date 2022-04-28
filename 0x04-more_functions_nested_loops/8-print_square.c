#include "main.h"
/**
 * print_square - prints a square.
 * @size: size of square.
 *
 * Return: void.
 */

void print_square(int size)
{
	int c, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
			for (d = 1; d < size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
