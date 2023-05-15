#include "main.h"
#include <stdlib.h>
/**
  * create_array - creates an array of chars and assign char c
  * @size: size of array
  * @c: char to assign
  *
  * Return: pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
