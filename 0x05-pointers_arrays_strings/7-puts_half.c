#include "main.h"
/**
  * puts_half - a function that prints half of a string
  * if odd len, n = (length_of_string -1) / 2)
  * @str: input
  * Return: half of input
*/

void puts_half(char *str)
{
	/* declared len, i and n as integer variables */

	int len = 0, n, i;

	while (str[len] != '\0')
	{
		len++;
	}

	n = len / 2;

	if (len % 2 == 1)
	{
		n++;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
