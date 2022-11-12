#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void	writing(int wid, int row, int x, int y)
{
	if ((!wid && !row) || (wid == x - 1 && row == y - 1 && wid > 0))
		ft_putchar('/');
	else if ((wid == x - 1 && !row) || (!wid && row == y - 1))
		ft_putchar('\\');
	else if ((!row || row == y - 1) || (!wid || wid == x - 1))
		ft_putchar('*');
	else
		ft_putchar(' ');
}


void    rush01(int x, int y)
{
    int    wid;
    int    row;

    row = 0;
    while (row < y)
    {
        if (x > 0)
        {
            wid = 0;
            while (wid < x)
            {
            writing(wid, row, x, y);
            wid++;
            }

            ft_putchar('\n');
        }
        else if ((x < 0) && (y < 0))
        {
            break;
        }

    row++;
    }
}

void main(){
    rush01(5,5);
}
