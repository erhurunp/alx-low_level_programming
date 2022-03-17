#include <stdio.h>

/**
 * main - prints all the hexadecimals
 * in lowercase followed by
 * a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	letter = 'a';
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
