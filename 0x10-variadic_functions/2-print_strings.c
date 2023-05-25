#include "variadic_functions.h"
/**
  * print_strings - prints strings
  * @separator: string to be printed between the strings
  * @n: number of strings passed to the function
  * Return: type
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sap;

	unsigned int i;
	char *args;

	va_start(sap, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(sap, char *);

		if (args)
		{
			printf("%s", args);
		}
		else
		{
			printf("(nil)");
		}

		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}

	putchar('\n');

	va_end(sap);
}
