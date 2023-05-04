#include "main.h"
/**
  * _strcat - concatenates two strings
  * @dest: input value
  * @src: input value
  *
  * Return: void
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	/* find the end of the destination string */

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	/* append the source string to the destination string */

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* add the terminating null byte */

	dest[i] = '\0';
	return (dest); /* return a pointer to the resulting string */
}
