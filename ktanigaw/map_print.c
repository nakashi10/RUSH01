	#include <stdio.h>

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
				printf("a[%d][%d][%d] no nakami ha %d\n", i, j , k , a[i][j][k]);
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