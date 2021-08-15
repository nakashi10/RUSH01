#include <stdio.h>

void	map_update(int map[4][4][5], int size_i, int size_j, int size_k);

void	scroll_k(int map[4][4][5], int size_k, int i, int j)
{
	int	k;

	k = 1;
	while (k < size_k)
	{
		if (map[i][j][0] == 1)
			return ;
		if (map[i][j][k] == 1)
		{
			if (k == size_k - 1)
			{
				map[i][j][0] = 1;
				break ;
			}
		}
		k++;
	}
}

void	scroll_k2(int map[4][4][5], int size_k, int i, int j)
{
	int	k;
	int	count;

	k = 1;
	while (k < size_k)
	{
		if (map[i][j][k] == 1)
		{
			count = k + 1;
			while (count < size_k)
			{
				if (map[i][j][count] == 1)
					return ;
				if (map[i][j][size_k - 1] == 0)
				{
					map[i][j][0] = 1;
					return ;
				}
				count++;
			}
		}
		k++;
	}
}

void	map_scroll(int map[4][4][5], int size_i, int size_j, int size_k)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 1;
	while (i < size_i)
	{
		while (j < size_j)
		{
			scroll_k(map, size_k, i, j);
			j++;
		}
		j = 0;
		i++;
		printf("\n");
	}
	printf("method end");
}
