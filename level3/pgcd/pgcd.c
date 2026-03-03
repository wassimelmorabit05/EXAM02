#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	tmp;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);

		while (b != 0)
		{
			tmp = b;
			b = a % b;
			a = tmp;
		}
		printf("%d", a);
	}
	printf("\n");
	return (0);
}