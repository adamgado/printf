#include "main.h"
/*
 * _putstr - prints a string and returns its number of characters
 * @c: string
 * Return - number of characters
 */
int _putstr(char *c)
{
	int count = 0;

	if(c)
	{
		for(count=0; c[count] != '\0'; count++)
		{
			_putchar(c[count]);
		}
	}

	return (count);
}
