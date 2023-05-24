#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name - print name using pointer to function
  * @name: name to add
  * @f: ponter to function
  * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
