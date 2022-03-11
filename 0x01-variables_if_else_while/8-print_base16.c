#include <stdio.h>

/**
 * main - prints all the hexadecimals
 * in lowercase followed by
 * a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexNum;

	hexNum = 0;
	while (hexNum <= 15)
	{
		putchar(hexNum + '0');
		if (hexNum == 10)
		{
			hexNum == 'a';
		} else if (hexNum == 11)
		{
			hexnum == 'b';
		}
		hexNum++;
	}
	putchar('\n');
	return (0);
}
