#include <stdio.h>

void	char_int(int b, char c[32])
{
	int	i, counter = -1;
	char	a[b];

	i = 0;
	while (i <= b)
	{
		if (i % 2 == 0)
		{
			counter += 1;
			a[counter] = c[i];
		}
		i += 1;
	}
	for (int j=0; j < b/2; j++)
		printf("%c", a[j]);
		printf("%c", a[16]);
}

int	main(void)
{
	char	c[] ="4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	int	b = sizeof c /sizeof c[0];

	for (int i=0; i < 33; i++) printf("%c", c[i]);
	printf("\n");
	printf("%d", b);

	printf("\n");
	char_int(b, c);
}