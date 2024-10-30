#include "main.h"
/**
 * strcat - Concatenates the string pointed to by @src,
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int chab = 0, dest_chab = 0;

	while (dest[chab])
		dest_chab++;

	for (chab = 0; src[chab]; chab++)
		dest[dest_chab++] = src[chab];

	return (dest);
}
