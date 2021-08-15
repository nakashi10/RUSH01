#include <stdio.h>

int	mysprt(int a)
{
	int	i, b;

	i = 0;
	while (i++ < 9)
	{
		if (a / 2 == i * i) b = i;
	}
	return	b;
}

int main(void)
{
	int e;

	e = mysprt(32);
	printf("%d", e);
}