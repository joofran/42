#include <unistd.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

void main()
{
    int nbr;
    int *pbr1 = &pbr1;
    int **pbr2 = &pbr2;
    int ***pbr3 = &pbr3;
    int ****pbr4 = &pbr4;
    int *****pbr5 = &pbr5;
    int ******pbr6 = &pbr6;
    int *******pbr7 = &pbr7;
    int ********pbr8 = &pbr8;
    int *********pbr9 = &pbr9;

    ft_ultimate_ft(pbr9);
    printf("%i\n", pbr9);
}
