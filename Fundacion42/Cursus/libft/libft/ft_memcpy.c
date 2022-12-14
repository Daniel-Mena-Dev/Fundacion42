/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:46:42 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/11 22:50:24 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *cpy, size_t n)
{
	unsigned char	*destcpy;
	unsigned char	*cpy_cpy;
	size_t			i;

	destcpy = (unsigned char *)dest;
	cpy_cpy = (unsigned char *)cpy;
	i = 0;
	if (destcpy[0] == '\0' && cpy_cpy[0] == '\0')
		return (0);
	while (i < n)
	{
		destcpy[i] = cpy_cpy[i];
		i++;
	}
	return (destcpy);
}
