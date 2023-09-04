#include "main.h"
/**
 * _memcpy - Copy memory
 * @dest: location
 * @src: location
 * @n: input
 * Return: desk
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
