#include <stdio.h>
#define n 4

void	first_input(int nn, int a[n][n][n + 1]);

void	taimenn_12(int nn, char c[n * 4], int flag[n][n][n + 1]);

void	ft_putchar(int nn, int flag[n][n][n + 1]);

int main(int argc, char *argv[])
{
	int	flag[n][n][n + 1];

	first_input(n, flag);

        // for (int i = 0; i < argc; i++)
        //         printf("argv[%d] = %s\n", i, argv[i]);

// for (int j = 0; j < n; j++)
// {
// 	for ( int k = 0; k < n; k++)
// 	{
// 		for ( int l = 0; l < n + 1; l++)
// 			printf("flag[%d][%d][%d]=%d\n", j, k, l, flag[j][k][l]);
// 	}
// }
	char c[4 * n] = {'4', '3', '2', '1', '1', '2', '2', '2', '4', '3', '2', '1','1', '2', '2', '2'};
	taimenn_12(4, c, flag);
	for (int j = 0; j < n; j++)
	{
	for ( int k = 0; k < n; k++)
		{
		for ( int l = 0; l < n + 1; l++)
			printf("flag[%d][%d][%d]=%d\n", j, k, l, flag[j][k][l]);
		}
	}
	ft_putchar(n, flag);
        return (0);
}