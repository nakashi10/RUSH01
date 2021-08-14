#include <unistd.h>
#include <stdio.h>


void	final_printout(int map[4][4][5]){

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

	//----------------------------start---------------------------------------
	i = 0;
	j = 0;
	k = 1;
	char final[3];

	final[1] = ' ' ;
	final[2] = '\n';
	while (i < size_i)
	{
		while (j < size_j)
		{
			while (k < size_k)
			{
				if(a[i][j][k] == 1)
				{

					final[0] = '0' + k;
					write(1,&final[0],1);
					break;
				}
				k++;
			}
			//write(1,& ,1);
			k = 1;
			j++;
			write(1,&final[1],1);
		}
		write(1,&final[2],1);
		//write(1,\n,1);
		j = 0;
		i++;
	}
	//----------------------------end----------------------------------------
}

int	main(void)
{
	int map[4][4][5];
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
	final_printout(map);
}