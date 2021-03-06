#include <stdio.h>

int	g_kk = 1;
int	g_count = 0;

void	map_update(int map[4][4][5], int size_i, int size_j, int size_k);

void	scroll_k(int map[4][4][5], int size_k, int i, int j)
{
	g_kk = 1;
	while (g_kk < size_k)
	{
		if (map[i][j][0] == 1)
			return ;
		if (map[i][j][g_kk] == 1)
		{
			if (g_kk == size_k - 1)
			{
				map[i][j][0] = 1;
				break ;
			}
			g_count = g_kk + 1;
			while (g_count < size_k)
			{
				if (map[i][j][g_count] == 1)
					return ;
				if (map[i][j][size_k - 1] == 0)
				{
					map[i][j][0] = 1;
					return ;
				}
				g_count++;
			}
		}
		g_kk++;
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
	}
}
