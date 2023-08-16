#include "main.h"
/**
 * _abs -Function to find absolute value of a number
 * @z: parameter
 * return: -z or z
 */
int _abs(int z)
{
	if (z < 0)
		return (-z);
	else if (z >= 0)
	{
		return (z);
	}
	return (0);
}
