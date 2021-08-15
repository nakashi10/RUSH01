#include <stdio.h>
void ft_arg1(int n, int a[4][4][5]);
void ft_arg4(int n, int a[4][4][5]);

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
				printf("a[%d][%d][%d]=%d\n", j, k, l, a[j][k][l]);
			printf("\n");
		}
		printf("\n");
	}
}
