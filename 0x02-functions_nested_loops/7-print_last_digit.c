#include "main.h"
/**
  *print_last_digit - print last digit
  *@z: input number
  *Return: last digit
  */
int print_last_digit(int z)
{
	int l;

	l = z % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}

