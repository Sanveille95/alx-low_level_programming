#include "main.h"
#include <stdio.h>
/**
  * print_array - a function that prints n element of an array
  * @a: array name
  * @n: is the number of of the arry to be printed
  * Return: a and n inputs
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
