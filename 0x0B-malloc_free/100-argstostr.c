#include "main.h"
#include <stdlib.h>
/**
  * argstostr - main entry
  * @ac: int input
  * @av: double pointer array
  * Return: 0
*/

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}

	l += ac;

	s = malloc(l + 1 * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
		{
			s[k++] = '\n';
		}
	}
	return (s);
}
