#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number to extract the bit from
 * @index: the index of the bit to extract, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		fprintf(stderr, "Error: index out of range\n");
		return (-1);
	}

	*n |= 1 << index;
	return (1);
}
