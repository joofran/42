#define INT_MIN -2147483648
#include <unistd.h>


void ft_putnbr(int nb);

void print_max(int **argv)
{
	int max;
  
  max = INT_MIN;
  while(*argv)
  {
    if (**argv > max)
    {
      
      max = **argv;

    }
    argv++;
  }
  ft_putnbr(max);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= (-1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

#includ <stdlib.h>
/*int main(void)
{
  int *arr[5];
  int i = -1;
  while (++i < 4)
    arr[i] = malloc(sizeof(int)*2);
  	
  arr[4] = 0;
  arr[0][0] = 0;
  arr[1][0] = 10;
  arr[2][0] = 30;
  arr[3][0] = 15;
  
  print_max(arr);
  }*/