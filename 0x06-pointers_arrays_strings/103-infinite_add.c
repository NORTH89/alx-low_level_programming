#include "main.h"
#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
	{
		return (0);
	}

	int i = len1 - 1;
	int j = len2 - 1;
	int k = size_r - 1;
	r[k] = '\0';

	while (i >= 0 || j >= 0)
	{
		int sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}

		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}

		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		k--;
	}

	if (carry > 0)
	{
		if (k < 0)
		{
			return (0);
		}
		r[k] = carry + '0';
	}
	else
	{
		k++;
	}

	return (&r[k]);
}
