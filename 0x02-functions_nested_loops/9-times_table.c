#include "main.h"
#include <stdio.h>
/**
 * times_table - Function that print times table
 * Return: 0
 */
void times_table(void)
{
	int i, j, z;
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				z = i * j;
			if (j == 0)
			{
				printf("%d, ", z);
			}
			else
			{
				printf("%2d", z);
				if (j != 9)
				{
					printf(",");
				}
			}
			}
			printf("\n");
		}
}

