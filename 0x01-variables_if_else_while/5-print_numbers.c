#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print numbers starting 0'
  *Return: Always 0 (Success)
  */
int main(void)
{
	int a;

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
