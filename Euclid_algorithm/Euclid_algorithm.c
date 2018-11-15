
#include <stdio.h>

int	find_divisor(int m, int n)
{
	int r;

	r = 0;
	r = m % n;

	if (r == 0)
		return (n);
	else
		find_divisor(n, r);
}

//Test the function
