#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * rot13 - function that encodes a string
 * @str: string to be encoded
 * Return: pointer to encoded string
 */
char *rot13(char *str)
{
	char *start = str;
	int diff;

	while (*str != '\0')
	{
		diff = (*str >= 'a') ? ('a') : ('A');
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			*str = ((*str - diff + 13) % 26) + diff;
		}
		str++;
	}

	return (start);
}
