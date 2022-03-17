#include "main.h"

/**
 * main - prints the letters of the alphabet
 * in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
