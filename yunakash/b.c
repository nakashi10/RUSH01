#include <stdio.h>
//1を受け取ったら4を入れる
void ft_arg1(int n, int a[4][4][5])
{
	//引数からa[h][i]を計算する
	int n1;
	int n2;
	n1 = (n - 1) / 4;
	n2 = (n - 1) % 4;

	int k = -1;
	while (++k < 5)
	{
		printf("before a[%d][%d][%d] = %d\n", n1, n2, k, a[n1][n2][k]);
	}

	a[n1][n2][0] = 1;
	a[n1][n2][1] = 0;
	a[n1][n2][2] = 0;
	a[n1][n2][3] = 0;
	a[n1][n2][4] = 1;
}