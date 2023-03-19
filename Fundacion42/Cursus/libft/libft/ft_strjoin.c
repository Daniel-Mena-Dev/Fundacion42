/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:42:40 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/16 18:37:41 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Concatena dos cadenas de caracteres sf y ss y devuelve una nueva cadena
 * que contiene la unión de ambas cadenas. La función reserva memoria suficiente
 * para la nueva cadena y la retorna.
*/
#include "libft.h"

char	*ft_strjoin(char const *sf, char const *ss)
{
	char	*sfinal;
	size_t	i;
	size_t	j;

	if (!sf || !ss)
		return (NULL);
	sfinal = (char *)malloc(sizeof(char) * (ft_strlen(sf) + ft_strlen(ss) + 1));
	if (!sfinal)
		return (NULL);
	i = 0;
	while (sf[i] != '\0')
	{
		sfinal[i] = sf[i];
		i++;
	}
	j = 0;
	while (ss[j] != '\0')
	{
		sfinal[i] = ss[j];
		i++;
		j++;
	}
	sfinal[i] = '\0';
	return (sfinal);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*st1 = "Voy a m**ar a...";
	char	*st2 = "Mouuu...weee..";
	char	*r = ft_strjoin(st1, st2);

	printf("%s\n", r);

	return (0);
}
*/