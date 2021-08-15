#include <unistd.h>
#include <stdio.h>


void	map_final_print(int map[4][4][5],int size_i,int size_j,int size_k)
{
    int		i;
	int		j;
	int		k;
	char	final[3];

	i = 0;
	j = 0;
	k = 1;
	final[1] = ' ' ;
	final[2] = '\n';
	while (i < size_i)
	{
		while (j < size_j)
		{
			while (k < size_k)
			{
				if(map[i][j][k] == 1)
				{

					final[0] = '0' + k;
					write(1,&final[0],1);
					break;
				}
				k++;
			}
			k = 1;
			j++;
			write(1,&final[1],1);
		}
		write(1,&final[2],1);
		j = 0;
		i++;
	}
}