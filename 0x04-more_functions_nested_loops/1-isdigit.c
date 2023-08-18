#include "main.h"
/**
 * _isdigit - Function to check for a digit betweem 0 to 9
 * @c: The number to be checked
 * Return: 1 for a digit between 0 to 9, or 0 for any else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
