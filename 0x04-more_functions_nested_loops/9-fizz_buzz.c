#include <stdio.h>
#include "main.h"

/**
 * main - fizz-buzz challenge
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
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
