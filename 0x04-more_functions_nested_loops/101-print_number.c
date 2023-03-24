#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: nothing
 */
void print_number(int n)
{
	int x = n;

	if (n < 0)
	{
		n *= -1;
		x = n;
		_putchar('-');
	}
	x /= 10;
	if (x != 0)
		print_number(x);

	_putchar(n % 10 + '0');
}