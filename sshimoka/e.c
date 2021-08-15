void	changeflag_1(int n, int i, int flag[n][n][n + 1])
{
	int j;

	if (i >= n)
	{
		i = i - n;
		flag[1][i][0] = 1;
	}
	else
		flag[n - 1][i][0] = 1;



	j = 0;
	while (++j <= n)
	{
		if (i <= n - 1)
			flag[n - 1][i][j] = 0;
		else
			flag[1][i][j] = 0;
	}
	flag[n - 1][i][n - 1] = 1;
}

void	changeflag_2(int n, int i, int flag[n][n][n + 1])
{
	int j;

	if (i >= 3 * n)
	{
		i = i - 3 * n;
		flag[i][n - 1][0] = 1;
	}
	else
	{
		i = i - 2 * n;
		flag[i][1][0] = 1;
	}

	j = 0;
	while (++j <= n)
	{
		if (i <= n - 1)
			flag[i][n - 1][j] = 0;
		else
			flag[i][1][j] = 0;
	}
	flag[i][n - 1][n - 1] = 1;
}


void	taimenn_12(int n, char c[n * 4], int flag[n][n][n + 1])
{
	int	i;

	i = -1;
	while (++i < 4 * n)
	{
		if (0 <= i && i <= n-1)
		{
			if(c[i] == '1' && c[i + n] == '2')
				changeflag_1(n, i, flag);
		}
		else if (n <= i && i <= 2 * n - 1)
		{
			if(c[i] == '1' && c[i - n] == '2')
				changeflag_1(n, i, flag);
		}
		else if (2 * n <= i && i <= 3 * n - 1)
		{
			if (c[i] == '1' && c[i + n] == '2')
				changeflag_2(n, i, flag);
		}
		else
		{
			if(c[i] == '1' && c[i - n] == '2')
				changeflag_2(n, i, flag);
		}
	}
}