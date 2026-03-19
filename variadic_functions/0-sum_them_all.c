#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints a name
 * @n: count of function.
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	int count;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
