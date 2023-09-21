#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 * Return: pointer to r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int digit;
	int i, j, k;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;

	r[k] = '\0';
	k--;

	while (i >= 0 || j >= 0)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		digit = sum % 10;
		r[k] = digit + '0';

		i--;
		j--;
		k--;
	}

	if (carry)
	{
		if (k == 0)
			return (0);

		r[k] = carry + '0';
	}

	return (&r[k]);
}
