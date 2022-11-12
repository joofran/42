/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:10:36 by jcrisost          #+#    #+#             */
/*   Updated: 2022/02/18 16:49:26 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	if (n == 0)
		return (0);
	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0' && (s1[x] == s2[x]) && x < n)
	{
		x++;
	}
	if (x == n)
		return (s1[x - 1] - s2[x - 1]);
	return (s1[x] - s2[x]);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char i;
	char	string1[] = "";
	char	string2[] = "";
	i = ft_strncmp(string1, string2, 4);
	printf("%d\n", i);
	printf("%d\n", strncmp(string1, string2, 3));
	return (0);
}