#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	long int longNum;
	long long int largeNum;
	char str;
	float decimals;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(str));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longNum));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)
		sizeof(largeNum));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(decimals));
	return (0);
}
