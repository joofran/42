#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnum(char n[4])
{
    ft_putchar(n[0]);
    ft_putchar(n[1]);
    ft_putchar(' ');
    ft_putchar(n[2]);
    ft_putchar(n[3]);
    ft_putchar(',');
}
int main ()
{
    char n[4];
    n[0] = '0';
    n[1] = '0';
    n[2] = '0';
    n[3] = '0';

    while(n[3] < '9')
    {
        n[3]++;
        ft_putnum(n);
        if(n[3] == '9')
        {
            while(n[2] < '9')
            {
                if(n[2] <= '8')
                {
                    n[3] = '0';
                    n[2]++;
                    ft_putnum(n);
                    ft_putchar('\n');
                    break;
                }
                else
                {
                    while(n[1] < '9')
                    {
                        n[1]++;
                        n[2] =n[1] +1;
                        ft_putnum(n);
                        break;
                    }
                }

            }
        }

    }
}
