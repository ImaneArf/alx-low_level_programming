#include <stdio.h>
#include <ctype.h>
/**
 *main - main function
 *
 * Return: always 0
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		else
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
