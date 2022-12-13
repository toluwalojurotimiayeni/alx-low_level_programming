#include "main.h"

/**
 * print_times_table - A function that prints the n times table
 * @n: This is the number to be checked
 */

void print_times_table(int n)
{
	int rows, columns, prod;

	if (n >= 0 && n <= 15)
	{
		for (rows = 0; rows <= n; rows++)
		{
			for (columns = 0; columns <= n; columns++)
			{
				prod = rows * columns;
				if (column == 0)
					_putchar('0' + prod);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (prod <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + prod);
					}
					else if (prod > 9 && prod < 100)
					{
						_putchar(' ');
						_putchar('0' + (prod / 10));
						_putchar('0' + (prod % 10));
					}
					else if (prod >= 100)
					{
						_putchar('0' + (prod / 100));
						_putchar('0' + ((prod / 10) % 10));
						_putchar('0' + (prod % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}

