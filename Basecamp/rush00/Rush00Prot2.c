#import <stdio.h>

void main()
{
    int x = 4;
    int y = 4;
    int n = 0;
    int c = 0;
    while (c < y)
    {
        if (c == 0)
        {
            while (n < x)
            {
                if (n ==0)
                {
                    printf("/");
                }
                else if (n==x-1)
                {
                    printf("\\");
                }
                else
                {
                    printf("*");
                }
        n++;
            }
        printf("\n");
        }
        else if (c == y-1)
        {
            n = 0;
            while (n < x)
            {
                if (n ==0)
                {
                    printf("\\");
                }
                else if (n==x-1)
                {
                    printf("/");
                }
                else
                {
                    printf("*");
                }
            n++;
            }
        }
        else
        {
            n = 0;
            while (n < x)
            {
                if (n ==0)
                {
                    printf("*");
                }
                else if (n==x-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            n++;
            }
        printf("\n");
        }
        c++;
    }
}
