#include <stdio.h>

/**
 * main - prints all the hexadecimals
 * in lowercase followed by
 * a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexNums;

	hexNums = 'a';
	while (hexNums <= 'f')
	{
		putchar(hexNums);
		hexNums++;
	}
	putchar('\n');
	return (0);
}
