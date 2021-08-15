// #include <stdio.h>
void	map_print(int map[4][4][5], int size_i, int size_j, int size_k);
void	map_scroll(int map[4][4][5], int size_i, int size_j, int size_k);
void	map_print(int map[4][4][5], int size_i, int size_j, int size_k);

void	update_logic(int map[4][4][5], int size_i, int i, int j)
{
	int	count;
	int	cross_count;

	count = 1;
	while (map[i][j][count] != 1)
	{
		count++;
	}
	cross_count = 0;
	while (cross_count < size_i)
	{
		if (cross_count != i)
		{
			map[cross_count][j][count] = 0;
		}
		if (cross_count != j)
		{
			map[i][cross_count][count] = 0;
		}
		cross_count++;
	}
}

void	map_update(int map[4][4][5], int size_i, int size_j, int size_k)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size_i)
	{
		while (j < size_j)
		{
			if (map[i][j][0] == 1)
			{
				update_logic(map, size_i, i, j);
			}
			j++;
		}
		j = 0;
		i++;
	}
	map_scroll(map, size_i, size_j, size_k);
}
