#include "main.h"
/**
  * _strncat - concatenate two strings using at most n bytes from src
  * @dest: input value
  * @src: input value
  * @n: input value
  *
  * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;

	/* find the end of the destination string */
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	/* append the source string to the destination string, up to n bytes */
	i = 0;

	while (i < n && *src != '\0')
	{
		*p++ = *src++;
		i++;
	}

	*p = '\0'; /* add a terminating null byte */
	return (dest); /* return a pointer to the resulting string */
}
