/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:46:42 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/08 17:48:56 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * En ésta función recibimos 2 parámetros que cambiaremos a 'unsigned char'
 * copia cada carácter de '*cpy' en '*dest' hasta el tamaño de 'n'
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *cpy, size_t n)
{
	unsigned char	*destcpy;
	unsigned char	*cpy_cpy;
	size_t			i;

	destcpy = (unsigned char *)dest;
	cpy_cpy = (unsigned char *)cpy;
	i = 0;
	if (!destcpy && !cpy_cpy)
		return (0);
	while (i < n)
	{
		destcpy[i] = cpy_cpy[i];
		i++;
	}
	return (destcpy);
}
