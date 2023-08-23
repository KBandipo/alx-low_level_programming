#include "main.h"
#include <stdio.h>
/**
 *  _strcat - Function concatenates two strings
 *  @dest: Parameter 1
 *  @src: Parameter 2
 *  Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0, i;

	while (dest[destlen])
	{
		destlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[destlen] = src[i];
		destlen++;
	}

	dest[destlen] = '\0';
	return (dest);
}
