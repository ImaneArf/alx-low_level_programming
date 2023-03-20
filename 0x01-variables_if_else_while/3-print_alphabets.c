#include <stdio.h>
#include <ctype.h>
/**
 *main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		putchar(tolower(ch));
	}
	for (ch = 'A'; ch <= 'Z' ; ch++)
	{
		putchar(toupper(ch));
	}
	putchar ('\n');
	return (0);
}
