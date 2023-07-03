#include <stdio.h>

/**
 * main - This function prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always returns 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
