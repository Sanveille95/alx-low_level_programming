#include "main.h"
#include <stdlib.h>
/**
  * str_concat -  concatenates two strings
  * @s1: input
  * @s2: input
  *
  * Return: concat of s1 and s2, NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	concat = malloc((i + j + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	i = j = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++, j++;
	}
	concat[i] = '\0';
	return (concat);
}
