#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - prints a name
* @name: name
* @f: pointer to function print_name
*
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
