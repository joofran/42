/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:14:46 by jv                #+#    #+#             */
/*   Updated: 2022/02/12 21:40:51 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;
    int i;

	tmp = dest;
	i = 0;
	while (src[i] !='\0')
    {
        dest[i] = src[i];
		i++;
    }
	//*dest = *src; PERGUNTAR PARA JOAO !!!
	return (tmp);
}

#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int    main(void)
{

    char *src;
    char *dest;
    char *ret;

    src = "0123456789";
    ret = ft_strcpy(dest, src);
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    printf("ret: %s\n", ret);

}
