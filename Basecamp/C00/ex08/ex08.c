#include <unistd.h>
#include <stdio.h>

void function_number(int z)
{
    int d;
    d = (z%10) + '0';
    write (1, &d, 1);
}

void main()
{
    int n = 9;
    int i = 0;



    while (i < n)
    {
        function_number(i);
        i++;
        while(c)
    }


}
