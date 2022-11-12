#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int col = 0;
int row = 0;
char l;

void rush01(int x, int y)
{
    while(row < y)
    {
        while(col < x)
        {
            if (((row == 0) && (col == 0)) || ((row = y-1) && (col = x-1)))
            {
                ft_putchar('/');

                //l = col != 0 ? col == x-1? ('\\'): ('*') : ('/');
            }
            else if (((row == 0) && (col == x-1) || (())))
            {
                //ft_putchar('\\')
                //l = col != 0 ? col == x-1? ('/'): ('*') : ('\\');
            }
            else
            {

                //l = col != 0 ? col == x-1? ('*'): (' ') : ('*');
            }
        col ++;
        //ft_putchar(l);
        }
        col = 0;
        row ++;
        ft_putchar('\n');
    }
}

void main()
{
    rush01(1,5);
}
