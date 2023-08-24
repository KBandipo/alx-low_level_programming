#include "main.h"
#include <stdio.h>
/**
  * cap_string - Function that capitalizes all words of a string.
  * @s: parameter
  * Return: s
  */
char *cap_string(char *s)
{
	int x = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[x])
	{
		i = 0;

		while (i < cspc)
		{
			if ((x == 0 || s[x - 1] == spc[i]) && (s[x] >= 97 && s[x] <= 122))
				s[x] -= 32;

			i++;
		}

		x++;
	}
	return (s);
}
