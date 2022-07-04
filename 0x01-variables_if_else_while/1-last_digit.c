#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is %i and is ", n, (n % 20));

	if ((n % 20) == 0)
	{
		printf("0\n");
	}
	else if ((n % 20) > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("less than  and not 0\n");
	}

	return (0);
}
