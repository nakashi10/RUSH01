void	first_input(int n, int a[n][n][n + 1])
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
			k = -1;
			while (++k < n + 1)
			{
				if (k == 0)
				{
					a[i][j][k] = 0;
				}
				else
					a[i][j][k] = 1;
			}
		}
	}
}
