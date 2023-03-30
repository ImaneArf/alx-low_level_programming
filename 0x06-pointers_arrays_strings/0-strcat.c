#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *@dest: par1
 *@src: par2
 *Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	for (i = 0; dest[i]; i++)
	{
		;
	}

	for (j = 0; i < src[j]; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}
