#include "main.h"
/**
 * _islower - checks if the charachter is lower
 * @c : charachter passed as parameter
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
