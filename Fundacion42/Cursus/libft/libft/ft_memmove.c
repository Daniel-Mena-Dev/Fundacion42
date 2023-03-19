/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:42:09 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/19 19:05:33 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *  Se utiliza para mover 'n' bytes de memoria desde la dirección de memoria
 *  'mv' a la dirección de memoria 'dest'. La función devuelve un puntero
 *  a 'dest'.
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *mv, size_t n)
{
	unsigned char	*destcpy;
	unsigned char	*mvcpy;
	size_t			i;

	destcpy = (unsigned char *)dest;
	mvcpy = (unsigned char *)mv;
	if (!destcpy && !mvcpy)
		return (NULL);
	if (destcpy > mvcpy)
	{
		while (n-- > 0)
			destcpy[n] = mvcpy[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			destcpy[i] = mvcpy[i];
			i++;
		}
	}
	return (destcpy);
}
/*
#include <stdio.h>

int main(void)
{
    char dest[] = "lampara"; // cadena de destino
    char mv[] = "abcd"; // cadena a mover

    // llamada a la función ft_memmove, n = 4
    ft_memmove(dest, mv, 4);

    // imprimir resultado
    printf("Resultado: %s\n", dest);

    return 0;
}
*/