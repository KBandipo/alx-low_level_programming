#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: v
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, v, check;

	v = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				v++;
				check = 1;
			}
		}

		if (check == 0)
			return (v);
	}

	return (v);
}
