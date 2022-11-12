#include <unistd.h>
#include <stdio.h>

int rotone_main(char **argv)
{
}

void main()
{
    char *a[] = {"abc"};

    write(1, a[3], 3);
}
