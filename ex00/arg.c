void	ft_arg1(int n, int a[4][4][5]);
void	ft_arg4(int n, int a[4][4][5]);

void	arg(char arg[16], int a[4][4][5])
{
	int	i;

	i = -1;
	while (i++ < 15)
	{
		if (arg[i] == '1')
			ft_arg1(i, a);
		if (arg[i] == '4')
		{
			ft_arg4(i, a);
		}
	}
}