/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:42:09 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/08 19:46:25 by dmena-ro         ###   ########.fr       */
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

/*return ((void *)(stcpy + i));  la dirección de memoria donde se hace la coincidencia*/