/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:13:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/08 17:45:38 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Ésta función recibe 1er parámetro 'const char *st' y cambiaremos cada
 * caracter por el carácter nulo y haremos ese cambio según el tamaño del
 * 2º parámetro size_t n'.
*/
#include "libft.h"

void	*ft_bzero(const char *st, size_t n)
{
	unsigned char	*stcpy;
	size_t			i;

	stcpy = (unsigned char *) st;
	i = 0;
	while (i < n)
	{
		stcpy[i] = '\0';
		i++;
	}
	return (stcpy);
}
