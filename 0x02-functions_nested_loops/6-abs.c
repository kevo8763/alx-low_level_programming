#include "main.h"
/**
  *_abs - Computes absolute value
  *of an integer
  *@i: input as integer
  *Return: Absolute value
  */
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
