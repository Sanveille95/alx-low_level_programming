#include "main.h"
/**
  * _strlen - returns the length of a string
  * @s : string
  * Return: length
*/

int _strlen(char *s)
{
	/* declared an integer variable len */
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
