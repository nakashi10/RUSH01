#include <unistd.h>

void	halfchar(char c[32])
{
	int	i;
	int	counter;

	i = 0;
	counter = -1;
	while (i <= 31)
	{
		if (i % 2 == 0)
		{
			counter += 1;
			c[counter] = c[i];
		}
		i += 1;
	}
}

int	counter_check(int counter)
{
	if (counter != 16)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return 1;
}

int	error_check(char argv[32])
{
	int	i;
	int	counter;

	i = -1;
	counter = 0;
	while (i++ < 34)
	{
		if (i % 2 == 0 && argv[i] == ' ')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (48 <= argv[i] && argv[i] <= 57)
		{
			counter++;
			if (i % 2 == 1)
			{
				write(1, "Error\n", 6);
				return (0);
			}
		}
	}

	return counter_check(counter);
}
