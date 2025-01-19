#include <stdio.h>
#include "funkcje.h"

int silnia(int n)
{
	if (n == 1 || n == 0) return 1;
	else return n * silnia(n - 1);
}

int fun(int n)
{
	if (n == 1) return -1;
	else return (-fun(n - 1)) * n - 2;
}

int nwd(int a, int b)
{
	if (a == b) return a;
	else if (a > b)
	{
		a = a - b;
		return nwd(a, b);
	}
	else
	{
		b = b - a;
		return nwd(a, b);
	}
}

int bin(int d)
{
	if (d / 2 == 0) return d % 2;
	else return (bin(d / 2) * 10 + (d % 2));
}

int fib(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return fib(n - 1) + fib(n - 2);
}

int f(int x, int n)
{
	if (n == 1) return x;
	else if (n % 3 == 0) return f(x, n / 3) * f(x, n / 3) * f(x, n / 3);
	else return x * f(x, n - 1);
}