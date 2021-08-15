#include <stdio.h>
int	main()
{
	int i = 0;
	while(++i < 1)
	{
		printf("saisyo: %d\n",i);
	}
	printf("\n");
	i = 0;
	while (i++ < 1)
	{
		printf("ato: %d\n", i);
	}

	return 0;
}