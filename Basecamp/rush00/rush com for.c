#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void rush01(int x, int y)
{
    int col;
    int row;
    char l;
    for(row = 0; row < y; row++)
    {
        for(col = 0; col < x; col++)
        {
            if (row == 0)
            {
                l = col != 0 ? col == x-1? ('\\'): ('*') : ('/');
            }
            else if (row == y-1)
            {
                l = col != 0 ? col == x-1? ('/'): ('*') : ('\\');
            }
            else
            {
                l = col != 0 ? col == x-1? ('*'): (' ') : ('*');
            }
        ft_putchar(l);
        }
        ft_putchar('\n');
    }
}

void main()
{
    rush01(1,5);
}
