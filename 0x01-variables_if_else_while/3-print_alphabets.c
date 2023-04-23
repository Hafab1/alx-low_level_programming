#include <stdio.h>
/**
* main - prints the alphabet in lowercase
* followed by the alphabet in uppercase
* each on a new line
* Return: Always 0 (Success)
*/

int main(void)
{
	char c;
	char d;

	while
		(c = 'a'; c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d = 'A'; c <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
