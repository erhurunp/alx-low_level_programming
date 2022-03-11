#include <stdio.h>

/**
 * main - prints all the hexadecimals
 * in lowercase followed by
 * a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexNum;

	hexNum = 0;
	while (hexNum <= 'f')
	{
		putchar(hexNum)
		hexNum++;
	}
	putchar('\n');
	return (0);
}
