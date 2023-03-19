/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:42:09 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/16 17:54:48 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Se utiliza para reemplazar los primeros 'n' bytes de memoria de la
 * dirección de memoria 's' por la variable 'i'. La función devuelve 's'
 * modificada.
*/
#include "libft.h"

void	*ft_memset(void *s, int i, size_t n)
{
	size_t			count;
	unsigned char	*scopy;

	scopy = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		scopy[count] = (unsigned char)i;
		count++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned char	cadena[] = "Kakarotto";
	char			*r;
	int				i = (char)70;

	r = ft_memset(cadena, i, 3);
	printf("%s\n", r);

	return (0);
}
*/