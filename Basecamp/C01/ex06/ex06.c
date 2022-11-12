#include <unistd.h>

int ft_strlen(char *str)
{
    int count =0;
    while (*str)
	{
		count++;
		str++;
	}
	return(count);
}

#include <stdio.h>
void main()
{
    char p[] = "trator";
    int i;
    i = ft_strlen(p);
    printf("%d", i);
}
