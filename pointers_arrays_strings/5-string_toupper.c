#include "main.h"
/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int chab = 0;

	while (str[chab])
	{
		if (str[chab] >= 'a' && str[chab] <= 'z')
			str[chab] -= 32;

		chab++;
	}

	return (str);
}
