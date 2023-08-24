#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @dest: Parameter
 * @src: Parameter
 * @n: Parameter
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_length = 0;

	while (src[index++])
	src_length++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_length; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
