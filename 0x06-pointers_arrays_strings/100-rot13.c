#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13 cipher
 * @str: string to be encoded
 * Return: pointer to encoded string
 */
char *rot13(char *str)
{
	char *result = str;
	int i;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; *str; str++)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*str == letters[i])
			{
				*str = rot13[i];
				break;
			}
		}
	}

	return (result);
}
