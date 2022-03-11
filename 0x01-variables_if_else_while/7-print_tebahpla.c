#include <stdio.h>

/**
 * main - prints the letters of the alphabet
 * in lowercase but in reverse order,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'z')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
