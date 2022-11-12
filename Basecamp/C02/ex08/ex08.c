char *ft_strlowcase(char *str)
{
    int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char original[] = "AS MUITAS letras MAIUSCULAS qUe Eu quis asldka;.;.881273";
	printf("ORIGINAL: %s", original);
	printf("\n");
	printf("UPPERCASE: %s", ft_strlowcase(original));
	printf("\n");
	return (0);
}
