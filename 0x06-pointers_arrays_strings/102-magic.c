#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*((int *)((char *)p + 20)) = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
