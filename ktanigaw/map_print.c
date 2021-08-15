	#include <stdio.h>

	void	map_print(int map[4][4][5], int size_i, int size_j, int size_k)
	{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	printf("map[%d][%d][%d] no nakami ha %d\n", i, j , k , map[i][j][k]);

	while (i < size_i)
	{
		while (j < size_j)
		{
			while (k < size_k)
			{
				printf("map[%d][%d][%d] no nakami ha %d\n", i, j , k , map[i][j][k]);
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
	}