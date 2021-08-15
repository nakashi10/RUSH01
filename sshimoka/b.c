#include <unistd.h>

void	ft_putchar(int n, int flag[n][n][n + 1])
{
	int	i;
	int	j;
	int	k;

	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < n)
		{
			k = 0;
			while (++k < n + 1)
			{
				if (j != 0)
					write(1, " ", 1);
				if (flag[i][j][k] == 1)
					write(1, &k, 1);
			}
			write(1, "\n", 1);
		}
	}
}

int	main(void)
{
	int	n = 4;
	int	flag[n][n][n + 1];
	int	i;
	int	j;
	int	k;

	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < n)
		{
			k = -1;
			while (k++ < n)
			{
				flag[i][j][k] = k;
			}
		}
	}

ft_putchar(n, flag);


}