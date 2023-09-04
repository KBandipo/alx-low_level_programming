#include "main.h"
/**
 *  _strncat - Concatenates two strings using at most
 *  an inputted number of bytes from src.
 *  @dest: Parameter 1
 *  @src: Parameter 2
 *  @n: Parameter 3
 *  Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_length = 0;

	while (dest[index++])
	dest_length++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_length++] = src[index];
	return (dest);
}
