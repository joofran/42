#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

void main()
{
    int nbr;
    ft_ft(&nbr);
    printf("%d", nbr);
}
