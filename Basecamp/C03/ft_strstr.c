/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:10:36 by jcrisost          #+#    #+#             */
/*   Updated: 2022/02/18 14:18:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count1;
	int	count2;

	if (*to_find == 0)
		return (str);
	count1 = 0;
	while (str[count1] != '\0')
	{
		count2 = 0;
		while (str[count1 + count2] == to_find[count2])
		{
			count2++;
			if (to_find[count2] == 0)
				return (&str[count1]);
		}
		count1++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char string1[] = "valentinalez";
// 	char string2[] = "ale";
// 	printf("%s\n", ft_strstr(string1, string2));
// 	return(0);
// }
