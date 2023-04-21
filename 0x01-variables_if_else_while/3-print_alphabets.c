#include <stdio.h>
/**
  * main - Entry point
  * Description: 'Print alphabets in lowercase and uppercase'
  * Return: always 0 (success)
*/
int main(void)
{
	int n = 97;
	int q = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (q <= 90)
	{
		putchar(q);
		q++;
	}
	putchar('\n');
	return (0);
}
