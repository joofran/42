char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}


#include <stdio.h>
int	main(void)
{
	char original[] = "AS MUITAS letras minusculas qUe Eu quis asldka;.;.881273";
	printf("ORIGINAL: %s", original);
	printf("\n");
	printf("UPPERCASE: %s", ft_strupcase(original));
	printf("\n");
	return (0);
}
