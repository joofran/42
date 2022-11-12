void ft_ultimate_div_mod(int *a, int *b)
{
    int d;
    int m;

    d = *a / *b;
    m = *a % *b;
    *a = d;
    *b = m;
}

#include <unistd.h>
#include <stdio.h>

void main()
{
    int a = 78;
    int b = 10;

    ft_ultimate_div_mod(&a, &b);
    printf("modulo: %d\n", a);
    printf("modulo: %i", b);
}
