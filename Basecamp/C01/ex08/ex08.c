#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	count_ext;
	int	i;
	int	j;

	count_ext = 0;
	while (count_ext < size - 1)
	{
		count = 1;
		while (count < size - count_ext)
		{
			i = tab[count_ext];
			j = tab[count_ext + count];
			if (i > j)
			{
				tab[count_ext] = j;
				tab[count_ext + count] = i;
			}
			count++;
		}
		count_ext++;
	}
}
