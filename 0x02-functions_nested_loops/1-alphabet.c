#include "main.h"
/**
  *print_alphabet - function with no return output
  *Description: print alphabets
  */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
