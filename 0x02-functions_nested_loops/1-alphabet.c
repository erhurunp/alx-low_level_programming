#include "main.h"

/**
 * main - prints the letters of the alphabet
 * in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	void print_alphabet(void)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
	return (0);
}
