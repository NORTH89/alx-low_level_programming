#include "main.h"
/**
 * atoi- convert a string to an integer.
 * @s: string input parameter.
 * Return: converted integer from string.
 */
int _atoi(char *s)
{
	unsigned int nb = 0;
	int sign = 1;

	do {
		if (*s == '-')
			nb *= -1;
		else if (*s >= '0' && *s <= '9')
			nb = (nb * 10) + (*s - '0');
		else if (nb > 0)
			break;
	} while (*s++);

	return (nb * sign);
}
