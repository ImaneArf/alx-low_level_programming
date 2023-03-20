#include <stdio.h>
#include <ctype.h>
/**
 * main - main fuction
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
