#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, &str[0], 1);
        str++;
	}
}

void main()
{
    char p[] = "popeye";
    ft_putstr(p);
}
