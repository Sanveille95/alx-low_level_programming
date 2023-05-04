#include "main.h"
/**
  * _strncpy - copy a string
  * @dest: input value
  * @src: inpput value
  * @n: input value
  *
  * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	/* copy at most n characters from src to dest */

	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest); /* return a pointer to the resulting string */
}
