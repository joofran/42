#include <unistd.h>


int ft_str_is_printable(char *str)
{
    while(*str)
    {
        if(!(31 <= *str && *str <= 126))
            return(0);
        str++;
    }
    return(1);
}

