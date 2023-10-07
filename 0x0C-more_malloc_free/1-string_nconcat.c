#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = (s1 == NULL) ? 0 : strlen(s1);
	unsigned int len2 = (s2 == NULL) ? 0 : strlen(s2);
	unsigned int concat_len = len1 + ((n >= len2) ? len2 : n);

	char *concat = malloc(sizeof(char) * (concat_len + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strcpy(concat, s1);
	}

	if (n >= len2)
	{
		strcat(concat, (s2 == NULL) ? "" : s2);
	}
	else
	{
		strncat(concat, (s2 == NULL) ? "" : s2, n);
	}

	return (concat);
}
