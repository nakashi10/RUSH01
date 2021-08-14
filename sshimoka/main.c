#include <stdio.h>

void	first_input(int a[4][4][5]);

int main(int argc, char *argv[])
{
	int	flag[4][4][5];

	first_input(flag);

        // for (int i = 0; i < argc; i++)
        //         printf("argv[%d] = %s\n", i, argv[i]);

for (int j = 0; j < 4; j++)
{
	for ( int k = 0; k < 4; k++)
	{
		for ( int l = 0; l < 5; l++)
			printf("flag[%d][%d][%d]=%d\n", j, k, l, flag[j][k][l]);
	}
}
        return (0);
}