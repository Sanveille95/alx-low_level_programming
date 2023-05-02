#include "main.h"
/**
  * rev_string - Reverses a string
  * @s: Input string
  * Return: string in reverse
*/

void rev_string(char *s)
{
	/* initialized integer variable len to 0 */
	/* declared end as a new character point */
	/* declared tmp as temporary character variable */

	int len = 0;
	char *end = s;
	char tmp;

	while (*end != '\0')
	{
		len++;
		end++;
	}

	end--;

	while (s < end)
	{
		tmp = *s;
		*s = *end;
		*end = tmp;
		s++;
		end--;
	}
}
