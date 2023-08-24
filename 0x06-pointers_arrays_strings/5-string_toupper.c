#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @g: The string to be changed.
 * Return: g
 */
char *string_toupper(char *g)
{
	int index = 0;

	while (g[index])
	{
	if (g[index] >= 'a' && g[index] <= 'z')
	g[index] -= 32;
	index++;
	}
	return (g);
}
