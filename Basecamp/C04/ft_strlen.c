/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:10:36 by coder             #+#    #+#             */
/*   Updated: 2022/02/18 18:44:18 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

// #include <stdio.h>
// int main()
// {
//     char p[] = "palaco";
//     int i;
//     i = ft_strlen(p);
//     printf("%d\n", i);

// 	return 0;
// }
