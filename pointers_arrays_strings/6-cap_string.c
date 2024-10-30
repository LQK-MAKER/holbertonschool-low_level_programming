#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int chab = 0;

	while (str[chab])
	{
		while (!(str[chab] >= 'a' && str[chab] <= 'z'))
			chab++;

		if (str[chab - 1] == ' ' ||
		    str[chab - 1] == '\t' ||
		    str[chab - 1] == '\n' ||
		    str[chab - 1] == ',' ||
		    str[chab - 1] == ';' ||
		    str[chab - 1] == '.' ||
		    str[chab - 1] == '!' ||
		    str[chab - 1] == '?' ||
		    str[chab - 1] == '"' ||
		    str[chab - 1] == '(' ||
		    str[chab - 1] == ')' ||
		    str[chab - 1] == '{' ||
		    str[chab - 1] == '}' ||
		    chab == 0)
			str[chab] -= 32;

		chab++;
	}

	return (str);
}
