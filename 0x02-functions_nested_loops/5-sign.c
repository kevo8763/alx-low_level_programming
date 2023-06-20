#include "main.h"
/**
  *print_sign - print positive negative or zero
  *@n: ASCII code
  *Return: 1 if positive 0 if 0 and -1 if negative
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
