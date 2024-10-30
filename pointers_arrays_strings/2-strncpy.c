#include "main.h"
/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int chab = 0, src_chab = 0;

	while (src[chab++])
		src_chab++;

	for (chab = 0; src[chab] && chab < n; chab++)
		dest[chab] = src[chab];

	for (chab = src_chab; chab < n; chab++)
		dest[chab] = '\0';

	return (dest);
}
