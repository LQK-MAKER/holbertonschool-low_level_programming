/**
 * main - prints the size of various types
 *
 * Return: O
 */
#include <stdio.h>
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (int) sizeof(a));
	printf("size of a int: %lu byte(s)\n", (int) sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (int) sizeof(c));
	printf("size of a lolng lolng int: %lu byte(s)\n", (int) sizeof(d));
	printf("size of a float: %lu byte(s)\n", (int) sizeof(f));
	return (0);
}
