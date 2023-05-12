#include "main.h"
/**
  * _isupper - shows 1 if the input is
  * uppercase character. Another cases, shows
  * 0
  * @c: The character is ASCII code
  *
  * Return: 1 for uppercase character. 0 for the rest
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_isupper('\n');
}
