#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - create two dimensional array of integers
  * @width: width input
  * @height: height input
  * Return: width or height is 0 or negative, return NULL
*/

int **alloc_grid(int width, int height)
{
	int **darr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	darr = malloc(height * sizeof(int *));

	if (darr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		darr[i] = malloc(width * sizeof(int));

		if (darr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(darr[i]);
			free(darr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			darr[i][j] = 0;
	}
	return (darr);
}
