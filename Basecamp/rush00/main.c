#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void rush01(int x, int y)
{

    int n = 0;
    int c = 0;



    while (c < y)
    {
        if (c == 0)
        {
            while (n < x)
            {
                if (n ==0)
                {
                    ft_putchar('/');
                }
                else if (n==x-1)
                {
                    ft_putchar('\\');
                }
                else
                {
                    ft_putchar('*');
                }
        n++;
            }
        ft_putchar('\n');
        }
        else if (c == y-1)
        {
            n = 0;
            while (n < x)
            {
                if (n ==0)
                {
                    ft_putchar('\\');
                }
                else if (n==x-1)
                {
                    ft_putchar('/');
                }
                else
                {
                    ft_putchar('*');
                }
            n++;
            }
        }
        else
        {
            n = 0;
            while (n < x)
            {
                if (n ==0)
                {
                    ft_putchar('*');
                }
                else if (n==x-1)
                {
                    ft_putchar('*');
                }
                else
                {
                    ft_putchar(' ');
                }
            n++;
            }
        ft_putchar('\n');
        }
        c++;
    }
}


void main(){
    rush01(128,5);
}
