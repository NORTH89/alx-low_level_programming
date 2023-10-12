#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: string to be printed
 * @...: variable number of arguments
 * Return: Nothing
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;
	char c;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			i++;
			continue;
		}

		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
