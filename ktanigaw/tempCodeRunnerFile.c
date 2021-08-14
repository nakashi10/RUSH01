void	update(int map[4][4][5])
{
	int	i;
	int j;
	int	k;
	int	size;

	i = 0;
	j = 0;
	k = 0;
	size = sizeof map / sizeof map[0];
	// map[0][1][0] = 1;
	// map[0][1][1] = 0;
	// map[0][1][2] = 0;
	// map[0][1][3] = 1;
	// map[0][1][4] = 0;
	while (i < size)
	{
		while (j < size)
		{
			if(map[i][j][0] == 1)
			{
				update_logic(map, i, j);
					// int count;
					// count = 1;
					// count = 1;
					// printf("a[%d][%d][%d] no nakami ha %d\n", i, j , k , a[i][j][k]);
					// while(a[i][j][count] != 1)
					// {
					// 	count++;
					// }
					// printf("count is %d\n", count);
					// // a[i][j][count] = 0;

					// int cross_count = 0;
					// while(cross_count < size_i )
					// {
					// 	if(cross_count != i)
					// 	{
					// 	 a[cross_count][j][count] = 0;
					// 	}
					// 	if(cross_count != j)
					// 	{
					// 	 a[i][cross_count][count] = 0;
					// 	}
					// 	cross_count++;
					// }
					// count = 1 ;
			}
		j++;
		printf("\n");
		}
	j = 0;
	i++;
	// printf("\n");
	}
}