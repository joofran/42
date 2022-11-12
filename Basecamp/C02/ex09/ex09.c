char *ft_strcapitalize(char *str)
{
    int i;
    int first;

    i = 0;
    first =0;
    while(str[i])
    {
        if(('A' <= str[i] && str[i] <= 'Z')&& first == 0)
            first = 1;
        else if (('A' <= str[i] && str[i] <= 'Z') && first == 1)
            str[i] = str[i] + 32;

        else if(('a' <= str[i] && str[i] <= 'z')&& first == 0)
        {
            str[i] = str[i] - 32;
            first = 1;
        }
        else if(!(('a' <= str[i] && str[i] <= 'z') || ('0' <= str[i] && str[i] <= '9')))
            first = 0;
        else if(('0' <= str[i] && str[i] <= '9') && first == 0)
            first = 1;
        i++;
    }
    return(str);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char original[] = "Vk_(7X)Vmf#H'Fk?>8j@} /7VVxh3(X{6)Xb";
	char original2[] = "Amendoa_castelo+Paralelo fEIJAO898aman 12popo 1212PO";
	char correct[] = "Vk_(7x)Vmf#H'Fk?>8j@} /7vvxh3(X{6)Xb";
	printf("ORIGINAL: %s", original);
	printf("\n");
	printf("UPPERCASEf: %s\n", ft_strcapitalize(original));
    printf("ORIGINAL2: %s", original2);
	printf("\n");
	printf("UPPERCASEf: %s", ft_strcapitalize(original2));
	printf("\n");

	return (0);
}
