/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:46:42 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/19 19:05:01 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Se utiliza para copiar 'n' bytes de memoria desde la dirección de memoria
 * 'cpy' a la dirección de memoria 'dest'. La función devuelve un puntero
 * a 'dest'.
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
/*
#include <stdio.h>

int main(void)
{
    char src[] = "Hello, world!";
    char dest[] = "bye, Dimitri";

	// Imprime el dest sin modificar.
    printf("----- 'dest' sin modificar -----:\n %s\n", dest);

    ft_memcpy(dest, src, 6);

    // Imprime el resultado.
    printf("\n\nEl resultado de la copia es:\n%s\n", dest);

    return (0);
}
*/