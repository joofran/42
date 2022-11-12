#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;

}

int main()
{
    int a = 10;
    int b = 5;

    printf("a = %i\nb = %i\n", a, b);
    ft_swap(&a, &b);
    printf("a = %i\nb = %i\n", a, b);
}
