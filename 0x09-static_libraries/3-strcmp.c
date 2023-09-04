#include "main.h"
/**
  * _strcmp - Function that compares two strings
  * @s1: String 1
  * @s2: String 2
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, d;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		d = a;
	}
	else
	{
		d = b;
	}

	while (c <= d)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (r);
}
