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
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	i = 0;

	while (i < n && *src != '\0')
	{
		*p++ = *src++;
		i++;
	}

	*p = '\0';
	return (dest);
}
