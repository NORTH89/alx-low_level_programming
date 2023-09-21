#include <stdio.h>
#include <string.h>

/**
 * rot13 - encodes a string
 * @str: string to be encoded
 * Return: pointer to encoded string
 */

char *rot13(char *str)
{
	char *result = str;
	int i;

	for (; *str; str++)
	{
		for (i = 0; i < 13; i++)
		{
			if ((*str >= 'A' && *str < 'Z') || (*str >= 'a' && *str < 'z'))
			{
				(*str)++;
			}
			else if (*str == 'Z' || *str == 'z')
			{
				*str -= 25;
			}
		}
	}

	return (result);
}
