#include "main.h"

/**
 * print_times_table - A function that prints the n times table,
 * starting with 0
 * @n: This is the number to be checked
 */

void print_times_table(int n)
{
	int rows, columns, prod;

	if (n >= 0 && n <= 15)
	{
		for (rows = 0; rows <= n; rows++)
		{
			_putchar('0');

			for (columns = 0; columns <= n; columns++)
			{
				_putchar(',');
				_putchar(' ');

				prod = rows * columns;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

