#include <stdio.h>

void	update(int map[4][4][5]);
void	update_logic(int map[4][4][5], int i, int j);
void	map_print(int map[4][4][5]);

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
void	map_print(int map[4][4][5])
	{

	int i;
	int j;
	int k;
	int size_i;
	int size_j;
	int size_k;

	i = 0;
	j = 0;
	k = 0;
	size_i = sizeof map / sizeof map[0];
	size_j = sizeof map / sizeof map[0][0] / size_i;
	size_k = sizeof map / sizeof map[0][0][0] / size_i / size_j;
	while (i < size_i)
	{
		while (j < size_j)
		{
			while (k < size_k)
			{
				printf("a[%d][%d][%d] no nakami ha %d\n", i, j , k , map[i][j][k]);
				k++;
			}
			k = 0;
			j++;
			printf("\n");
		}
		j = 0;
		i++;
		printf("\n");
	}
	printf("method end");
	}

void	update_logic(int map[4][4][5], int i, int j)
{
	int	count;
	int	size_i;

	count = 1;
	size_i = sizeof map / sizeof map[0];
	// printf("a[%d][%d][%d] no nakami ha %d\n", i, j , k , a[i][j][k]);
	while(map[i][j][count] != 1)
		{
		count++;
		}
	// printf("count is %d\n", count);
	// a[i][j][count] = 0;
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

void	update(int map[4][4][5])
{
	int	i;
	int j;
	int	k;
	int	size;

	i = 0;
	j = 0;
	k = 0;
	size = 4;
	//size = sizeof map / sizeof map[0];
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
					map_print(map);
					update(map);
			}
		j++;
		printf("\n");
		}
	j = 0;
	i++;
	// printf("\n");
	}
}

int	main(int argc, char *argv[])
{
	// argv[0] = "./a.out" ;
	char col1up = '4';
	char col2up = '3';
	char col3up = '2';
	char col4up = '1';
	char col1down = '1';
	char col2down = '2';
	char col3down = '2';
	char col4down = '2';
	char low1left = '4';
	char low2left = '3';
	char low3left = '2';
	char low4left = '1';
	char low1right = '1';
	char low2right = '2';
	char low3right = '2';
	char low4right = '2';


// initialize-start--------------------------------------------------------
	int map[4][4][5];

	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	int size_i = sizeof map / sizeof map[0];
	int size_j = sizeof map / sizeof map[0][0] / size_i;
	int size_k = sizeof map / sizeof map[0][0][0] / size_i / size_j;
	// printf("%d\n\n\n\n", size_i);
	// printf("%d\n\n\n\n", size_j);
	// printf("%d\n\n\n\n", size_k);
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
//initialize-end--------------------------------------------------------------------------------
//now_printf-start--------------------------------------------------------------------------------
	i = 0;
	j = 0;
	k = 0;
	while (i < size_i)
	{
		while (j < size_j)
		{
			while (k < size_k)
			{
				printf("map[%d][%d][%d] flag is %d\n", i, j , k , map[i][j][k]);
				k++;
			}
			k = 0;
			j++;
			printf("\n");
		}
		j = 0;
		i++;
		printf("\n");
	}
	// update(map);
	 map_print(map);
}
