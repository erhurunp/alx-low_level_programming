#include <stdio.h>

/**
 * main - prints the letters of the alphabets
 * except q and e, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' && ch == 'q')
		{
			break;
			continue;
		}
	}
	putchar('\n');
	return (0);
}
