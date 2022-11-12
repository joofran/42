#include <unistd.h>

int main ()
{
    char a = '0';
    char b = '1';
    char c = '2';
    char v = ',';
    char e = ' ';

    while(a <= '9')
    {
        if (c >'9')
        {
            b++;
            c = b+1;
            if (b > '9')
            {
                a++;
                b = a + 1;
                c = b + 1;
            }
        }
        if ((a != b) &&(a != c) &&  (b!=c) && c <= '9')
        {
            write(1, &a, 1);
            write(1, &b, 1);
            write(1, &c, 1);
            if(a != '7')
            {
                write(1, &v, 1);
                write(1, &e, 1);
            }
        }
        c++;
    }
}
