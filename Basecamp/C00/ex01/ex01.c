#include <unistd.h>

void ft_print_alphabet(void)
{
    char c = 'a';
    int n = 0;
    while(n < 26)
    {
        write(1, &c, 1);
        n++;
        c++;
    }

}

void main()
{
    ft_print_alphabet();
}
