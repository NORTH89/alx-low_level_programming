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
		i = ((*str >= 'A' && *str <= 'Z') ? (*str - 'A') :
				((*str >= 'a' && *str <= 'z') ? (*str - 'a') : 0));

		if (i != 0)
		{
			i = (i + 13) % 26;
			*str = ((*str >= 'A' && *str <= 'Z') ? (i + 'A') : (i + 'a'));
		}
	}

	return (result);
}
