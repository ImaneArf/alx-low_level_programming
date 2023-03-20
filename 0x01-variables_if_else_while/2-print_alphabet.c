#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - main function
 *
 * Return: always 0
 *
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z' ; ch++)
	{
		putchar(tolower(ch));
	}
	putchar('\n');
	return (0);
}
