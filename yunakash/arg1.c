void	set_flag(int n, int a[4][4][5]);
void	ft_arg1(int n, int a[4][4][5])
{
	if (n < 4)
	{
		set_flag4(n, a);
	}
	else if (n < 8)
	{
		set_flag(n, a);
	}
	else if (n < 12)
	{
		set_flag(n, a);
	}
	else
	{
		set_flag(n, a);
	}
}

void	set_flag4(int n, int a[4][4][5])
{
	int	n1;
	int	n2;

	n1 = n / 4;
	n2 = n % 4;
	a[n1][n2][0] = 1;
	a[n1][n2][1] = 0;
	a[n1][n2][2] = 0;
	a[n1][n2][3] = 0;
	a[n1][n2][4] = 1;
}

void	set_flag8(int n, int a[4][4][5])
{
	int	n1;
	int	n2;

	n1 = n / 4 + 2;
	n2 = n % 4;
	a[n1][n2][0] = 1;
	a[n1][n2][1] = 0;
	a[n1][n2][2] = 0;
	a[n1][n2][3] = 0;
	a[n1][n2][4] = 1;
}

void	set_flag12(int n, int a[4][4][5])
{
	int	n1;
	int	n2;

	n2 = n / 4 - 2;
	n1 = n % 4;
	a[n1][n2][0] = 1;
	a[n1][n2][1] = 0;
	a[n1][n2][2] = 0;
	a[n1][n2][3] = 0;
	a[n1][n2][4] = 1;
}

void	set_flag16(int n, int a[4][4][5])
{
	int	n1;
	int	n2;

	n2 = n / 4;
	n1 = n % 4;
	a[n1][n2][0] = 1;
	a[n1][n2][1] = 0;
	a[n1][n2][2] = 0;
	a[n1][n2][3] = 0;
	a[n1][n2][4] = 1;
}
