#include "main.h"
/**
  *_isalpha - check whether alphabet is lowercase or uppercase
  *@c: ASCII code character
  *Return: 0 if uppercase or lowercase 1 if otherwise
  */
int _isalpha(int c)
{
	if ((c >= 92 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
