#include "function_pointers.h"
/**
 *print_name - prints name with a big boiii
 *@f: pointeur
 *@name: th ename
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
