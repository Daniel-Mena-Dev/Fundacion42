/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:31:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/16 19:33:00 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * El objetivo es comparar dos cadenas de caracteres, "st1" y "st2", de
 * longitud "n" de comparación máxima entre ellas y devolver '0' que indica si
 * son iguales o la diferencia entre ellas en caso de ser distinta según la
 * tabla ASCII, menor o mayor que 0.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*st1 = "prueba";
	char	*st2 = "probo";
	size_t	ln = 3;
	int		r;

	r = ft_strncmp(st1, st2, ln);
	printf("%d\n", r);
}
*/