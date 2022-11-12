#include <unistd.h>

void ft_print_numbers(void)
{
    char c;
    int n;

    c = '0';
    n = 0;

    while(n<10)
    {
        write(1, &c, 1);
        n++;
        c++;
    }

}

void main()
{
    ft_print_numbers();
}
