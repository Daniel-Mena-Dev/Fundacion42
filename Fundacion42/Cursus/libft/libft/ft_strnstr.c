/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:31:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/16 19:40:13 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Busca la primera aparición de una cadena (sr) en otra cadena más
 * grande (dest) hasta una longitud n especificada. Si se encuentra la cadena
 * buscada, la función devuelve un puntero a la ubicación en la cadena más 
 * grande donde se encontró la cadena buscada. Si no se encuentra,
 * la función devuelve NULL.
*/
#include "libft.h"

char	*ft_strnstr(const char *dest, const char *sr, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (sr[0] == '\0')
		return ((char *)dest);
	else if (dest[0] == '\0')
		return (NULL);
	while (dest[i] != '\0')
	{
		j = 0;
		while (dest[i + j] == sr[j] && (i + j) < n)
		{
			if (dest[i + j] == '\0' && sr[j] == '\0')
				return ((char *)&dest[i]);
			j++;
		}
		if (sr[j] == '\0')
			return ((char *)&dest[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*st1 = "prueba";
	char	*st2 = "pba";
	size_t	ln = 6;
	char		*r;

	r = ft_strnstr(st1, st2, ln);
	printf("%s\n", r);
}
*/