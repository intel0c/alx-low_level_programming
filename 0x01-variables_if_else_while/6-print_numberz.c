#include <stdio.h>

/**
 * main - print number  0 - 10 using putchar
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
