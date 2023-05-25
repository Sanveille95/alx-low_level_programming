#include "variadic_functions.h"
/**
  * sum_them_all - sum all paramenters
  * @n: const unsigned int
  * Return: int sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list sap;

	unsigned int i;
	int sum = 0;

	va_start(sap, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(sap, unsigned int);
	}

	va_end(sap);

	return (sum);
}
