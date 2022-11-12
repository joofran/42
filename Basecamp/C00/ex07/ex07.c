#include <unistd.h>
#include <stdio.h>

void main()
{
    int z = 74;
    int c = 1000000000;
    char d;
    int i = 0;
    int m = 0;

    while(c >= 1)
    {
        d = (z/c) + '0';
        z = z % c;
        c = c/10;
        if (d =='0' && m ==0)
            m = 0;
        else
        {
            m = 1;
            write(1, &d, 1);
        }
    }
}
/*
void main()
{
    int n = 2147483646;


    int s = n%1000000000;
    s = s/100000000;
    printf("%i\n", s);

    ft_putnbr(n);
}
*/
