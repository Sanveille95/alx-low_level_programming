#include "main.h"
/**
  * print_rev - print in reverse
  * @s: string
  * return: 0
*/

void print_rev(char *s)
{
	/* declared len as an integer variable */
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s--;

	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
