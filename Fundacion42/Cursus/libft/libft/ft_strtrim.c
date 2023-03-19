/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:05:05 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/19 18:23:35 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * La función elimina de la cadena 's' los carácteres coincidentes con 'set' 
 * desde el principio y desde el final hasta que no exista coincidencias.
 * Se reserva memoria para la string resultante
*/

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	cont;

	if (!s || !set)
		return (NULL);
	while (*s && ft_strchr(set, *s))
		s++;
	cont = ft_strlen(s);
	while (cont && ft_strrchr(set, s[cont]))
		cont--;
	return (ft_substr(s, 0, cont + 1));
}
/*
#include <stdio.h>

int	main (void)
{
	char	*st = "babababaKabapatabakfba bnab bao pa ba ddbabababaKababa";
	char	*set = "ba";
	char	*result;

	result = ft_strtrim(st, set);
	printf("%s\n", result);
}
*/