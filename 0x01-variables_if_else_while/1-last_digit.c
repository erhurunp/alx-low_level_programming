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
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastNum = n % 10;
	if (lastNum 10 > 5)
	{
		printf("Last digit of %d is %d  and is greater than 5\n", n, lastNum);
	} else if (lastNum == 0)
	{
		printf("Last digit of %d is (%d % 10) and is 0\n", n, lastNum);
	} else if (lastNum < 6 && lastNum != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	}
	return (0);
}