#include "main.h"
/**
  *_islower - Check for lowercase character
  *@c: ASCII code character
  *Return: 0 if lowercase and 1 if otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

