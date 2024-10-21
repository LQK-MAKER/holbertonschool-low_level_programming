#include <stdio.h>
/**
 * main - 1
 *
 * Return: 0
 */
int main(void)
{
	int z;

	z = 48;
	while (z < 58)
	{
		putchar(z);
		if (z != 57)
		{
			putchar(44);
			putchar(32);
			z++;
		}
		else
		{
			z++;
		}
	}
	putchar('\n');
	return (0);
}
