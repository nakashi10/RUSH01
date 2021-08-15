#include <stdio.h>
#include <unistd.h>

void	map_final_print(int map[4][4][5],int size_i,int size_j,int size_k);
void	map_print(int map[4][4][5], int size_i, int size_j, int size_k);
void	map_update(int map[4][4][5], int size_i, int size_j, int size_k);
void	map_scroll(int map[4][4][5], int size_i, int size_j, int size_k);


int	main(int argc, char *argv[])
{

//argsの文字列を読み取って要素数を調べてくるメソッド必要
int map[4][4][5];

	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	printf("test");

	int size_i = sizeof map / sizeof map[0];
	int size_j = sizeof map / sizeof map[0][0] / size_i;
	int size_k = sizeof map / sizeof map[0][0][0] / size_i / size_j;
	while (i < size_i)
	{
		while (j < size_j)
		{
			while (k < size_k)
			{
				if(k == 0)
				{
				map[i][j][k] = 0;
				} else
				map[i][j][k] = 1;
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
	//map_final_print(map, size_i, size_j, size_k);
	map[0][1][0] = 0;
	map[0][1][1] = 0;
	map[0][1][2] = 0;
	map[0][1][3] = 0;
	map[0][1][4] = 1;
	map_print(map, size_i, size_j, size_k);
	map_update(map, size_i, size_j, size_k);
	// map[0][1][0] = 0;
	// map[0][1][1] = 0;
	// map[0][1][2] = 0;
	// map[0][1][3] = 1;
	// map[0][1][4] = 0;
	// map_scroll(map, size_i, size_j, size_k);

	map_print(map, size_i, size_j, size_k);
}
