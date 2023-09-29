#include "main.h"
/**
 * binary_to_uint - Function tha converts a binary number to an unsigned int.
 * @b: String containing the binary number.
 * Return: The converted number, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decimalvalue = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimalvalue = 2 * decimalvalue + (b[a] - '0');
	}

	return (decimalvalue);
}
