/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:42:09 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/14 19:22:44 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *st, int ch, size_t n)
{
	char	*stcpy;
	size_t	i;

	stcpy = (char *)st;
	i = 0;
	while (i < n)
	{
		if (stcpy[i] == (char)ch)
		{
			return ((void *)(stcpy + i));
		}
		i++;
	}
	return (NULL);
}

/*return ((void *)(stcpy + i));  imprimir a partir de ese con void*/