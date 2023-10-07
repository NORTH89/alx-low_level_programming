#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory using calloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer to allocated memory
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *fill;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	fill = mem;

	for (index = 0; index < (size * nmemb); index++)
		fill[index] = '\0';

	return (mem);
}
