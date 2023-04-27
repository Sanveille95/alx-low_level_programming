#include "main.h"
/**
  * _isdigit - Shows 1 if the input is a
  * digit. Another cases, shows 0
  *
  * @c: The character is ASCII code
  *
  * Return: 1 for digit. 0 for the rest.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_isdigit('\n');
}
