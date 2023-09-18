#include "main.h"
/**
 * _strlen - returns the length of a string..
 * @s: the value to be evaluate.
 * return: not.
 */
void _strlen(char *s)
{
	int leng;

	while (*s != '\0')
	{
		s++;
		leng++;

		return (leng);
	}
}
