#include "function_pointers.h"
#include <stddef.h>


/**
*print_name - this is the function
*@name: name
*@f: func
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
