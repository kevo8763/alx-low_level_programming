#include "main.h"
/**
  *print_alphabet_x10 - function declared in main.h
  *Description: Print alphabets 10 times
  */
void print_alphabet_x10(void)
{
	int x;
	int a;

	for (x = 0; x <= 10; x++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
