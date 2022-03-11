#include <stdio.h>

/**
 * main - prints the letters of the alphabets
 * except q and e, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 0; ch <= 'z'; ch++)
	{
		if (ch = 'a')
		{
			putchar(ch);
		}
		else if (ch == 'e' || ch == 'q')
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
