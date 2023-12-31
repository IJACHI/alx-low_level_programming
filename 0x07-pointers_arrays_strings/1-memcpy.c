#include "main.h"
/**
 *_memcpy - this is a function that copies memory area
 *@dest: where the memory is stored
 *@src: where the memory is copied
 *@n: the number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

