void	changeflag_1(int n, int i, int flag[n][n][n + 1], char c[16])
{
	int	j;
	int	a;

	a = c[i] + '0';
	if (i < n)
	{
		flag[n - 1][i][0] = 1;
		j = 0;
		while (j++ < n)
			flag[n - 1][i][j] = 0;
		flag[n - 1][i][n - a + 1] = 1;
	}
	else
	{
		i = i - n;
		flag[0][i][0] = 1;
		j = 0;
		while (j++ < n)
			flag[0][i][j] = 0;
		flag[0][i][n - a + 1] = 1;
	}

}

void	changeflag_2(int n, int i, int flag[n][n][n + 1], char c[16])
{
	int	j;
	int	a;

	a = c[i] + '0';
	if (i < 3 * n)
	{
		flag[i][n - 1][0] = 1;
		j = 0;
		while (j++ < n)
			flag[i][n - 1][j] = 0;
		flag[i][n - 1][n - a + 1] = 1;
	}
	else
	{
		i = i - 3 * n;
		flag[i][0][0] = 1;
		j = 0;
		while (j++ < n)
			flag[i][0][j] = 0;
		flag[i][0][n - a + 1] = 1;
	}
}

void	taimenn_12(int n, char c[16], int flag[n][n][n + 1])
{
	int	i;

	i = -1;
	while (++i < 4 * n)
	{
		if (i <= n - 1 && c[i] == '1')
			changeflag_1(n, i, flag, c);
		else if (n <= i && i <= 2 * n - 1 && c[i] == '1')
			changeflag_1(n, i, flag, c);
		else if (2 * n <= i && i <= 3 * n - 1)
		{
			if (c[i] == '1')
				changeflag_2(n, i, flag, c);
		}
		else if (c[i] == '1')
			changeflag_2(n, i, flag, c);
	}
}
