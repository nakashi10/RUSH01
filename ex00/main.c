void	error_check(char argv[32]);
void	halfchar(char c[32]);
void	first_input(int n, int a[n][n][n + 1]);

int main(int argc, char *argv[])
{
	error_check(argv[1]);
	halfchar(argv[1]);
	first_input(4, a[4][4][5]);
	return 0;
}
