#include "main.h"

/**
 * _isdigit - checks for digits from 0 - 9
 * @c: c is a digit
 *
 * Return: 1 if c is a digit (0 - 9),
 * otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
