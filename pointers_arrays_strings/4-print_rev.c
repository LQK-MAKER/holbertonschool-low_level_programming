#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
	void rev_string(char *s)
	{
		char rev = s[0];
		int as = 0;
		int i;

		while (s[as] != '\0')
			as++;

		for (i = 0; i < as; i++)
		{
			as--;
			rev = s[i];
			s[i] = s[as];
			s[as] = rev;
		}
	}
