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
	int i;

	/* copy at most n characters from src to dest */
	i = 0;

	while (i < n && *src != '\0')
	{
		*dest++ = *src++;
		i++;
	}

	while (i < n)
	{
		*dest++ = '\0';
		i++;
	}
	return (dest); /* return a pointer to the resulting string */
}
