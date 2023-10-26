#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to extract the bit from
 * @index: the index of the bit to extract, starting from 0
 *
 * Return: the value of the bit at index index or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;
	unsigned int x, count = 0;

	if (n == 0)
	{
		count = 1;
	}
	else
	{
		for (num = n; num > 0; num >>= 1)
			count++;
	}

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	if (index > count - 1)
		return (0);

	x = n >> index;
	if (x & 1)
		return (1);
	else
		return (0);
}