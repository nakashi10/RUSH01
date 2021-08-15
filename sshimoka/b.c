#include <unistd.h>

void	ft_putchar(int a[4][4])
{
	int	i;
	int	j;
	char	c;

	i = 0;
	while (i++ < 4)
	{
		while (j++ < 4)
		{
			c[i][j] = a[i][j] + '0';
			if (j != 0)
				write(1, " ", 1);
			write(1, c[i][j], 1);
		}
		write(1, "\n", 1);
	}
}

int	main(void)
{
	int	a[4][4];

	for (int i=0; i<4; i++){
		for (int j=0; j=4; j++){
			a[4][4] = 1;
		}
	}
	ft_putchar(a);
}