#include <stdio.h>
/**
  * main -Entry point
  *
  * Return: 0
*/

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 4) = 98; /* add the value 98 to the memory allocation pointed by p+4 */
	printf("a[2] = %d\n", a[2]); /* print the value of a[2] */

	return (0);
}
