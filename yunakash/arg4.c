#include <stdio.h>
void	change_line4(int n, int a[4][4][5]);
void	change_line8(int n, int a[4][4][5]);
void	change_line12(int n, int a[4][4][5]);
void	change_line16(int n, int a[4][4][5]);

void	ft_arg4(int n, int a[4][4][5])
{
	if (n < 4)
	{
		change_line4(n, a);
	}
	else if (n < 8)
	{
		change_line8(n, a);
	}
	else if (n < 12)
	{
		change_line12(n, a);
	}
	else
	{
		change_line16(n, a);
	}
}

void	change_line4(int n, int a[4][4][5])
{
	int n1;
	int n2;
	int	h;
	int	i;

	n1 = n / 4;
	n2 = n % 4;
	h = -1;
	while (h++ < 3)
	{
		i = -1;
		while (i++ < 4)
		{
			if (i == 0 || h + 1 == i)
				a[n1 + h][n2][i] = 1;
			else
				a[n1 + h][n2][i] = 0;
		}
	}
}

void	change_line8(int n, int a[4][4][5])
{
	int n1;
	int n2;
	int	h;
	int	i;

	n1 = n / 4 + 2;
	n2 = n % 4;
	h = -1;
	while (h++ < 3)
	{
		i = -1;
		while (i++ < 4)
		{
			if (i == 0 || h + 1 == i)
				a[n1 - h][n2][i] = 1;
			else
				a[n1 - h][n2][i] = 0;
		}
	}
}

void	change_line12(int n, int a[4][4][5])
{
	int n1;
	int n2;
	int	h;
	int	i;

	n2 = n / 4 - 2;
	n1 = n % 4;
	h = -1;
	while (h++ < 3)
	{
		i = -1;
		while (i++ < 4)
		{
			if (i == 0 || h + 1 == i)
				a[n1][n2 + h][i] = 1;
			else
				a[n1][n2 + h][i] = 0;
		}
	}
}

void	change_line16(int n, int a[4][4][5])
{
	int n1;
	int n2;
	int	h;
	int	i;

	n2 = n / 4;
	n1 = n % 4;
	h = -1;
	while (h++ < 3)
	{
		i = -1;
		while (i++ < 4)
		{
			if (i == 0 || h + 1 == i)
				a[n1][n2 - h][i] = 1;
			else
				a[n1][n2 - h][i] = 0;
		}
	}
}
