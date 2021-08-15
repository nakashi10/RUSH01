#include <unistd.h>

int	flag_check1(int a[4][4][5])
{
	int	i;
	int	j;

	i = -1;
	while (i++ < 3)
	{
		j = -1;
		while (j++ < 3)
		{
			if (a[i][j][0] == 1)
				return (0);
		}
	}
	return (1);
}


int	flag_check2(int a[4][4][5])
{
	int	i;
	int	j;

	i = -1;
	while (i++ < 3)
	{
		j = -1;
		while (j++ < 3)
		{
			if (a[i][j][0] == 0)
			{
				write(1, "Error\n", 6);
				return (0);
			}
		}
	}
	return (1);
}
