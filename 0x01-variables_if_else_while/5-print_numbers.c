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
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
