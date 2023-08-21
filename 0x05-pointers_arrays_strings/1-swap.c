#include <stdio.h>
/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
