#include <stdio.h>

void	test(int a[4][4][5])
{
	a[0][0][0] = 1001111;
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
	int a[4][4][5];

	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;

	int size_i = sizeof a / sizeof a[0];
	int size_j = sizeof a / sizeof a[0][0] / size_i;
	int size_k = sizeof a / sizeof a[0][0][0] / size_i / size_j;
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
				a[i][j][k] = 0;
				} else
				a[i][j][k] = 1;
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
//now_printf-end--------------------------------------------------------------------------------

//kakutei method-start--------------------------------------------------------------------------
	i = 0;
	j = 0;
	k = 0;
	a[0][1][0] = 1;
	a[0][1][1] = 0;
	a[0][1][2] = 0;
	a[0][1][3] = 1;
	a[0][1][4] = 0;
	while (i < size_i)
	{
		while (j < size_j)
		{
				if(a[i][j][0] == 1)
				{
					///////////// void update(map[4][4][5]);で　マップを更新
					// update(a);


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
				}

			j++;
			printf("\n");
		}
		j = 0;
		i++;
		printf("\n");
	}
//kakutei method-end--------------------------------------------------------------------------


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
//now_printf-end--------------------------------------------------------------------------------
