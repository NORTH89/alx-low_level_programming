#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to memory area
 * @src: pointer to memory area
 * @n: number of bytes
 * Return: pointer to memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
