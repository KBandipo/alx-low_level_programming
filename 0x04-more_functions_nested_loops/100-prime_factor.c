#include <stdio.h>
#include <math.h>
/**
 * main - Prints the largest prime factor of the numbers 612852475143
 * Return: 0
 */
int main(void)
{
	long i, largef;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
	if (number % i == 0)
	{
	largef = number / i;
	}
	}
	printf("%ld\n", largef);
	return (0);
}
