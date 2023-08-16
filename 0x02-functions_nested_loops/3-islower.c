#include "main.h"
/**
 * _islower - function that check if the parameter is a lower case
 * @c: Parameterin check
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{return (1); }
	else
	{return (0); }
}
