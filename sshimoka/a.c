void	first_input(int a[4][4][5])
{
	int	i;
	int	j;
	int	k;

	i=-1;
	while (++i < 4)
	{
		j=-1;
		while (++j <4)
		{
			k = -1;
			while (++k < 5)
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