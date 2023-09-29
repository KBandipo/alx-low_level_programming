#include "main.h"
/**
 * get_bit - Function that returns the value of a bit
 * at an index in a decimal number
 * @n: The number to search
 * @index: The index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitvalue;

	if (index > 63)
		return (-1);

	bitvalue = (n >> index) & 1;

	return (bitvalue);
}
