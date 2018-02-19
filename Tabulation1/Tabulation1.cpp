

#include "stdafx.h"


#include <stdio.h>
#include <math.h>
#define PUT_DELIM(x, h, b) (x) + (h) >= (b) ? '\n' : ' '
#define COND1(x) (x) <= -3.0
#define FUNC1(x) 3-(x*x)
#define COND2(x) (x) < -3 && (x) < 0
#define FUNC2(x) pow(2*(x)-1/(x), 1./3)
#define FUNC3(x) 3*sqrt(x)-pow(x, 2)
#define FUNC(x) COND1(x) ? FUNC1(x): (COND2(x) ? FUNC2(x) : FUNC3(x))
int main()
{
	double a = -4.0, b = 1.0, x, h = 0.1;
	printf("x:\t\n");
	for (x = a; x <= b; x += h)
	{
		printf("%6.2f%c\n", x, PUT_DELIM(x, h, b));

	}
	printf("y:\t");
	for (x = a; x <= b; x += h)
	{
		printf("%6.3f%c\n", FUNC(x), PUT_DELIM(x, h, b));
	}
	getchar();

	return 0;
}