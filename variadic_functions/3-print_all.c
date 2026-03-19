#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *str;
	char *separator;

	i = 0;
	separator = "";

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				separator = ", ";
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				separator = ", ";
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				separator = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				separator = ", ";
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
