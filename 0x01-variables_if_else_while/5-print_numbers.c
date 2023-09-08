#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the numbers
 *
 * Return: 0 if success
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
