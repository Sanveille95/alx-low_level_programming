#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_numbers - prints numbers by separator
  * @separator: string to be printed between numbers
  * @n: number of args
  * Return void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sap;

	unsigned int i;

	va_start(sap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(sap, unsigned int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');

	va_end(sap);
}
