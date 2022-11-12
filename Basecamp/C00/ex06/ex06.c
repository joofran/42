#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void function_sizec(int z)
{
    int c = 1000000000;
    while(c < z)
        c = c/10;
}

void writing(int z)
{
    int i = 0;
    char zero = '0';
    while(i < z)
    {
        write(1, &zero, 1);
        i++;
    }
}

void main()
{
    writing(5);
}
