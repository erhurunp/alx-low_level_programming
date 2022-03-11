#include <stdio.h>

/**
 * main - prints all single digit numbers
 * in base ten starting from zero,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10; num++)
	{
		printf("%d\n", num);
	}
	return (0);
}
