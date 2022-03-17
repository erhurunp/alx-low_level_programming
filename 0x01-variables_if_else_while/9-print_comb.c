#include <stdio.h>

/**
 * main - prints all single digits
 * in every possible combination
 * separated by commas
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nums;

	nums = 0;
	while (nums <= 9)
	{
		putchar(nums + '0');
		if (nums != 9)
		{
			putchar(',');
			putchar(' ');
		}
		nums++;
	}
	putchar('\n');
	return (0);
}
