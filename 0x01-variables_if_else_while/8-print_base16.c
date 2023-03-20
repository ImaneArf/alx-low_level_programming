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
	char j;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	for (j = 'a'; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
