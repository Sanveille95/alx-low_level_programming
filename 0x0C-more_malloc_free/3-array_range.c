#include "main.h"
#include <stdlib.h>
/**
  * *array_range - creates an array of integers
  * @min: minimum range
  * @max: maximum range
  * Return: pointer to the new array
*/

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
