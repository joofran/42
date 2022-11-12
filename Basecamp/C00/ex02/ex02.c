#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char c;
	int n;

	c = 'z';
	n = 26;

	while(n != 0)
	{
		write(1, &c, 1);
		n--;
		c--;
	}
}

void main(void)
{
    ft_print_reverse_alphabet();
}
