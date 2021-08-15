#include <stdio.h>

void	map_print(int map[4][4][5], int size_i, int size_j, int size_k);

// void	update(int map[4][4][5]);
// void	update_logic(int map[4][4][5], int i, int j);
void	map_print(int map[4][4][5],int size_i,int size_j,int size_k);

// int	main(int argc, char *argv[])
// {
// 	int map[4][4][5];

// 	int i;
// 	int j;
// 	int k;

// 	i = 0;
// 	j = 0;
// 	k = 0;

// 	int size_i = sizeof map / sizeof map[0];
// 	int size_j = sizeof map / sizeof map[0][0] / size_i;
// 	int size_k = sizeof map / sizeof map[0][0][0] / size_i / size_j;
// 	while (i < size_i)
// 	{
// 		while (j < size_j)
// 		{
// 			while (k < size_k)
// 			{
// 				if(k == 0)
// 				{
// 				map[i][j][k] = 0;
// 				} else
// 				map[i][j][k] = 1;
// 				k++;
// 			}
// 			k = 0;
// 			j++;
// 		}
// 		j = 0;
// 		i++;
// 	}
// 	map_print(map);
// 	// update(map);
// }
//void	update(int map[4][4][5]);
// void	map_print(int map[4][4][5])
// 	{

// 	int i;
// 	int j;
// 	int k;
// 	int size_i;
// 	int size_j;
// 	int size_k;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	size_i = sizeof map / sizeof map[0];
// 	size_j = sizeof map / sizeof map[0][0] / size_i;
// 	size_k = sizeof map / sizeof map[0][0][0] / size_i / size_j;
// 	while (i < size_i)
// 	{
// 		while (j < size_j)
// 		{
// 			while (k < size_k)
// 			{
// 				printf("a[%d][%d][%d] no nakami ha %d\n", i, j , k , map[i][j][k]);
// 				k++;
// 			}
// 			k = 0;
// 			j++;
// 			printf("\n");
// 		}
// 		j = 0;
// 		i++;
// 		printf("\n");
// 	}
// 	printf("method end");
// 	}

void	update_logic(int map[4][4][5],int size_i, int i, int j)
{
	int	count;

	count = 1;
	while(map[i][j][count] != 1)
		{
		count++;
		}
	int cross_count = 0;
	while(cross_count < size_i )
	{
		if(cross_count != i)
		{
    		map[cross_count][j][count] = 0;
		}
		if(cross_count != j)
		{
			map[i][cross_count][count] = 0;
		}
		cross_count++;
	}
}

void	map_update(int map[4][4][5], int size_i, int size_j, int size_k)
{
	int	i;
	int j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size_i)
	{
		while (j < size_j)
		{
			if(map[i][j][0] == 1)
			{
				update_logic(map,size_i, i, j);
			}
		j++;
		}
	j = 0;
	i++;
	}
}