#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}

	if (n % 2 == 1)
	{
		print_binary(n / 2);
		printf("1");
	}
	else
	{
		print_binary(n / 2);
		printf("0");
	}
}
