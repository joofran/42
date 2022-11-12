/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:10:36 by jcrisost          #+#    #+#             */
/*   Updated: 2022/02/18 14:18:23 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	count2;

	count = 0;
	count2 = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[count2] != '\0' && count2 < nb)
	{
		dest[count + count2] = src[count2];
		count2++;
	}
	dest[count + count2] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	string1[] = "enzo";
// 	char	string2[] = "valentina";
// 	printf("%s\n", ft_strncat(string1, string2, 4));
// 	return (0);
// }