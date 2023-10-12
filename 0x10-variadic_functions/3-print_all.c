#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: format to print
 * @...: variable number of arguments
 *
 * Return: Nothing
 */
void print_all(const char *const format, ...)
{
	const char *ptr = format;
	char *s;

	va_list args;

	va_start(args, format);

	while (*ptr)
	{
		if (*ptr == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (*ptr == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (*ptr == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (*ptr == 's')
		{
			s = va_arg(args, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
		}

		ptr++;
		if (*ptr && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
			printf(", ");
	}

	va_end(args);
	printf("\n");
}
