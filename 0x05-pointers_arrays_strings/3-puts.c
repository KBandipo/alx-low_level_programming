#include "main.h"
/**
 * _puts - Function that prints a string
 * @str: The string to print
 * Return: 0
 */
void _puts(char *str)

{
	int i;
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
