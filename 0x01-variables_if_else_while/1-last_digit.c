#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - prints a random number
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d(n % 10) and is
			greater than 5\n", n);
	} else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d(n % 10) and is 0\n", n);
	} else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is %d(n % 10) and is less
			than 6 and not 0\n", n);
	}
	return (0);
}
