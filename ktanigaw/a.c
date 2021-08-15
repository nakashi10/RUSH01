#include <stdio.h>
void ft_arg1(int n, int a[4][4][5]);
void ft_arg4(int n, int a[4][4][5]);
void	map_scroll(int map[4][4][5], int size_i, int size_j, int size_k);
void	map_update(int map[4][4][5], int size_i, int size_j, int size_k);
void	map_print(int map[4][4][5], int size_i, int size_j, int size_k);
void	map_final_print(int map[4][4][5],int size_i,int size_j,int size_k);
void	taimenn_12(int n, char c[16], int flag[4][4][5]);

int main()
{
	int a[4][4][5];
	int i;
	int j;
	int k;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
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

	char arg[16] = {'4','3','2','1','1','2','2','2','4','3','2','1','1','2','2','2'};
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

	int n = 4;
	for (int j = 0; j < n; j++)
	{
		for (int k = 0; k < n; k++)
		{
			for (int l = 0; l < n + 1; l++)
				printf("flag[%d][%d][%d]=%d\n", j, k, l, a[j][k][l]);
			printf("\n");
		}
		printf("\n");
	}


	int size_i = sizeof a / sizeof a[0];
	int size_j = sizeof a / sizeof a[0][0] / size_i;
	int size_k = sizeof a / sizeof a[0][0][0] / size_i / size_j;

	map_final_print(a, size_i, size_j, size_k);
	 map_print(a, size_i, size_j, size_k);
	taimenn_12(4, arg, a);
	map_print(a, size_i, size_j, size_k);

	map_final_print(a, size_i, size_j, size_k);

	printf("\n\n map_update start");
	map_update(a, size_i, size_j, size_k);
	printf("\n\n map_update end");

	map_print(a, size_i, size_j, size_k);

	printf("\n\n map_scroll start");
	map_scroll(a, size_i, size_j, size_k);
	printf("\n\n map_scroll end");
	map_print(a, size_i, size_j, size_k);
	map_final_print(a, size_i, size_j, size_k);


	printf("\n\n map_update start");
	map_update(a, size_i, size_j, size_k);
	printf("\n\n map_update end");

	map_print(a, size_i, size_j, size_k);

	printf("\n\n map_scroll start");
	map_scroll(a, size_i, size_j, size_k);
	printf("\n\n map_scroll end");
	map_print(a, size_i, size_j, size_k);
	map_final_print(a, size_i, size_j, size_k);

}
