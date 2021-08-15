void	error_check(char argv[32]);
void	halfchar(char c[32]);
void	first_input(int n, int a[n][n][n + 1]);
void	arg(char arg[16], int a[4][4][5]);
void	taimenn_12(int n, char c[16], int flag[4][4][5]);
void	map_update(int map[4][4][5], int x, int y, int z);
void	map_scroll(int map[4][4][5], int x, int y, int z);
void	map_final_print(int map[4][4][5], int x, int y, int z);

int	main(int argc, char *argv[])
{
	char	a[4][4][5];

	error_check(argv[1]);
	halfchar(argv[1]);
	first_input(4, a);
	arg(argv[1], a);
	taimenn_12(4, argv[1], a);
	map_scroll(a, 4, 4, 5);
	map_update(a, 4, 4, 5);
	map_scroll(a, 4, 4, 5);
	map_update(a, 4, 4, 5);
	map_final_print(a, 4, 4, 5);
	return (0);
}
