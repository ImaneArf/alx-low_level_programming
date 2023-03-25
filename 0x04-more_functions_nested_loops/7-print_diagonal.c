#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: parameter
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j <= n ; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
