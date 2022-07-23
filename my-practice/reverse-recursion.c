#include "main.h"

/**
 * main - a function that prints the reverse of a string
 *
 * Return: Always 0
 */

void _put_recursion(char *s);

	int main (void)
{
	_put_recursion("Print this line in reverse");

	return (0);
}

void _put_recursion(char *s7)
{
	if (*s == "\0")
	{
		_putchar(*s);
		_put_recursion( s++ );
	}
	else
		_putchar("\n");
}
