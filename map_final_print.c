#include <unistd.h>

int		g_i = -1;
int		g_j = -1;
int		g_k = 0;
char	g_final[3];

void	map_final_print(int map[4][4][5], int size_i, int size_j, int size_k)
{
	g_i = -1;
	g_j = -1;
	g_k = 0;
	g_final[1] = ' ' ;
	g_final[2] = '\n';
	while (g_i++ < size_i)
	{
		while (g_j++ < size_j)
		{
			while (g_k++ < size_k)
			{
				if (map[i][j][k] == 1)
				{
					g_final[0] = '0' + k;
					write(1, &g_final[0], 1);
					break ;
				}
			}
			g_k = 1;
			write(1, &g_final[1], 1);
		}
		write(1, &g_final[2], 1);
		g_j = 0;
	}
}
