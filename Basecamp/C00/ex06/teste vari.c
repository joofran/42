#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void function_pair(int z)
{
    int d;
    d = (z/10) + '0';
    write (1, &d, 1);
    d = (z%10) + '0';
    write (1, &d, 1);
}

void main()
{
    int pair1 = 0;
    int pair2 = 0;

    while(pair1 <= 99)
    {
        pair2 = pair1 +1;
        while(pair2 <= 99)
        {
            function_pair(pair1);
            ft_putchar(' ');
            function_pair(pair2);
            if(pair1 != 98)
                write(1, ", ", 2);
            pair2++;
        }
        pair1++;


    }
}
