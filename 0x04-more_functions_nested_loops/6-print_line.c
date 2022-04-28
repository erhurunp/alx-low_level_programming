#include "main.h"

/**
 * print_line - prints a line
 * @n: n is the line's length
 *
 * Return: void
 */

void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
