#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void    rush01(int x, int y)
{
    int    wid;
    int    row;

    row = 0;
    while (row < y)
    {
        wid = 0;
        while (wid < x)
        {
            if ((!wid && !row) || (wid == x - 1 && row == y - 1 && wid > 0))
                ft_putchar('/');
            else if ((wid == x - 1 && !row) || (!wid && row == y - 1))
                ft_putchar('\\');
            else if ((!row || row == y - 1) || (!wid || wid == x - 1))
                ft_putchar('*');
            else
                ft_putchar(' ');
        wid++;
        }

        ft_putchar('\n');
    row++;
    }
}

void main(){
    rush01(1,5);
}
