#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments
 * Return: Nothing
 */
#include <stdarg.h>
#include <stdio.h>

void print_all(const char *const format, ...)
{
	const char *ptr = format;
	char c;
	int i;
	float f;
	char *s;

	va_list args;

	va_start(args, format);

	while (*ptr)
	{
		if (*ptr == 'c')
		{
			c = va_arg(args, int);
			printf("%c%s", c, (*(ptr + 1)) ? ", " : "");
		}
		else if (*ptr == 'i')
		{
			i = va_arg(args, int);
			printf("%d%s", i, (*(ptr + 1)) ? ", " : "");
		}
		else if (*ptr == 'f')
		{
			f = va_arg(args, double);
			printf("%f%s", f, (*(ptr + 1)) ? ", " : "");
		}
		else if (*ptr == 's')
		{
			s = va_arg(args, char *);
			if (s != NULL)
				printf("%s%s", s, (*(ptr + 1)) ? ", " : "");
			else
				printf("(nil)%s", (*(ptr + 1)) ? ", " : "");
		}
		ptr++;
	}
	va_end(args);
	printf("\n");
}
