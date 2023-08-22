#include "main.h"
/*
 * _putint - prints a number
 * @num: number
 * Return - number of digits
 */
int _putint(int *num)
{
	count = 0

	if(num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
		
		while(num != 0)
		{
			_putchar((num % 10) + '0');
			num /= 10;
			count++
		}
	}
	else if(num == 0)
	{
		_putchar('0')
		count++
	}
	else
	{
		while(num != 0)
		{
			_putchar((num % 10) + '0');
			num /= 10;
			count++
		}
	}

	return (count);

}
