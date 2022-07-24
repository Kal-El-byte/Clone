#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints the reverse of a string
 *
 * Return: Always 0                                      */                                                     
void _put_recursion(char *s);

        int main (void)
{
        _put_recursion("\nPrint this line in reverse");

        return (0);
}

void _put_recursion(char *s)
{
        if (*s)
        {
                _put_recursion( s + 1 );
                char(*s);
        }
}
