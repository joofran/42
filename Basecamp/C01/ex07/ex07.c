#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int rev[size];
    int i = 0;
    while(i < size)
    {
        rev[(size - i - 1)] = tab[i];
        i++;
    }
    i = 0;
    while(i <size)
    {
        tab[i] = rev[i];
        i++;
    }
}

void main()
{
    int tab[7];
    int size = 7;
    int count = -1;
    tab[0] = 0;
    tab[1] = 8;
    tab[2] = 3;
    tab[3] = 4;
    tab[4] = 5;
    tab[5] = 6;
    tab[6] = 7;
    ft_rev_int_tab(&tab, 7);
    while (++count < size)
    printf("%d", tab[count]);
}
