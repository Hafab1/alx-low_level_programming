#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'Z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
		return (0);
}
