#include "main.h"

/**
 * main - fizz-buzz challenge
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 0;

	while (n <= 100)
	{
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("\n");

	return (0);
}
