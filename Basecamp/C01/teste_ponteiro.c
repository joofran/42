#include <stdio.h>

int fct(int a)
{
    a = a +42;
    return(a);
}

int main(void)
{
    int a;

    a = 42;
    printf("%d\n", a);
    a = fct(a);
    printf("%d\n", a);
    return(0);
}
