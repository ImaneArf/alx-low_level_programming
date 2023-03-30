#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *@dest: par1
 *@src: par2
 *Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		i++;
		j++;
	}

	dest[i + j] = '\0';
	return (dest);
}
