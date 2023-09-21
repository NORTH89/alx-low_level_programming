#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int i;
	int is_negative = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	if (is_negative)
	{
		_putchar('-');
	}

	while (divisor != 0)
	{
		i = n / divisor;
		_putchar(i + '0');
		n %= divisor;
		divisor /= 10;
	}
}
