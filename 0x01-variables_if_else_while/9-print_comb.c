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
	while (nums < 100)
	{
		putchar(nums + '0');
		nums++;
	}
	putchar('\n');
	return (0);
}
