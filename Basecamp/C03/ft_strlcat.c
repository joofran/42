/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:10:36 by jcrisost          #+#    #+#             */
/*   Updated: 2022/02/18 15:22:19 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	if (str[i] == '\0')
		return (i);
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	count2;

	count = 0;
	count2 = 0;
	if (size != '\0')
	{
		while ((count < (size -1)) && (src[count] != '\0'))
		{
			count++;
		}
		while ((count2 < (size - 1)) && (
				src[count2] != '\0') && count2 < (size - 1))
		{
			dest[count + count2] = src[count2];
			count2++;
		}
	}
	return (ft_strlen(dest));
}

#include <stdio.h>
#include <bsd/bsd.h>
#include <bsd/string.h>
int	main(void)
{
	unsigned int c = 6;
	char	dest[] = "valentina";
	char	orig[] = "enzo";
	printf("%u\n", ft_strlcat(dest, orig, c));
	printf("%s\n", dest);
	printf("%zu\n", strlcat(dest, orig, c));
	printf("%s\n", dest);
	return (0);
}
