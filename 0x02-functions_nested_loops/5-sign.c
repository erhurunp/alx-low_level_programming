#include "main.h"

/**
 * print_sign - prints the sign
 * of a number
 * @n: n is an integer
 *
 * Return: 1 (n greater than positive), 0 (n is zero)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
