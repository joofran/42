/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:10:36 by jcrisost          #+#    #+#             */
/*   Updated: 2022/02/18 14:16:30 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0')
	{
		count++;
	}
	return (s1[count] - s2[count]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	string1[] = "enzaa";
// 	char	string2[] = "enzoo";
// 	char i = ft_strcmp(string1, string2);
// 	printf("%d\n", i);
// 	printf("%d\n", strcmp(string1, string2));
// 	return (0);
// }