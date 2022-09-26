#include "main.h"
/**
 * _memcpy - copies bytes from memory area src
 * @dest: destination of memory copy
 * @src: memory area to be copied
 * @n: number of bytes to be copied
 * Author: Idoko David Edward
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
