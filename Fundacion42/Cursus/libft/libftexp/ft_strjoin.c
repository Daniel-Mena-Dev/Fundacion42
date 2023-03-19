/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:42:40 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/14 19:59:12 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * La función ft_strjoin concatena dos cadenas de caracteres sf y ss y devuelve una nueva cadena que contiene la unión de ambas cadenas. La función aloja memoria suficiente para la nueva cadena y la retorna.

La función primero verifica si alguna de las cadenas pasadas como argumento es nula y, de ser así, retorna un puntero nulo indicando un error. Luego, aloja memoria suficiente para la nueva cadena con un tamaño igual a la suma de las longitudes de las cadenas de entrada más uno para el carácter nulo final.
*/
#include "libft.h"

char	*ft_strjoin(char const *sf, char const *ss)
{
	char	*sfinal;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!sf || !ss)
		return (NULL);
	sfinal = (char *)malloc(sizeof(char) * (ft_strlen(sf) + ft_strlen(ss) + 1));
	while (sf[i] != '\0')
	{
		sfinal[i] = sf[i];
		i++;
	}
	while (ss[j] != '\0')
	{
		sfinal[i] = ss[j];
		i++;
		j++;
	}
	sfinal[i] = '\0';
	return (sfinal);
}
