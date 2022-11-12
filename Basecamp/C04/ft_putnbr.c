/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:10:36 by coder             #+#    #+#             */
/*   Updated: 2022/02/18 19:42:16 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		c;
	int		m;
	char	d;
	int		p;

	if (nb < 0)
		write(1, "-", 1);
	p = 1;
	m = 0;
	c = 1000000000;
	while (c >= 1)
	{
		if (nb < 0)
			p = (-1);
		d = ((nb / c) * p) + '0';
		nb = nb % c;
		c = c / 10;
		if (d == '0' && m == 0)
		m = 0;
		else
		{
			m = 1;
			write(1, &d, 1);
		}
	}
}

// #include <limits.h>
// #include <stdio.h>

// int main ()
// {
// 	int m = (INT_MIN);
// 	ft_putnbr(m);
// 	return(0);
// }