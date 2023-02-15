/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:05:05 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/14 19:18:12 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  La función ft_strtrim tiene como objetivo eliminar todos los caracteres de 
  la string 'set' desde el principio y desde el final de 's1' hasta encontrar
  un caracter que no pertenezca a 'set' y dejará de eliminar.
*/
#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	cont;

	if (!s || !set)
		return (NULL);
	while (*s && ft_strchr(set, *s))
		s++;
	cont = ft_strlen(*s);
	while (cont > 0 && ft_strrchr(set, s[cont - 1]))
		cont--;
	return (ft_substr(s, 0, cont + 1));
}





















/*
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	// Verifica que 's1' y 'set' no sean nulos
	if (s1 == NULL || set == NULL)
		return (NULL);

	start = 0;
	end = ft_strlen(s1) - 1;

	// Encuentra el índice inicial de la string que no pertenece a 'set'
	while (start <= end && ft_strchr(set, s1[start]) != NULL)
		start++;

	// Encuentra el índice final de la string que no pertenece a 'set'
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;

	// Reserva memoria para la nueva string recortada
	if (!(trimmed_str = (char *)malloc(sizeof(char) * (end - start + 2))))
		return (NULL);

	// Copia la string recortada a la nueva string
	ft_strncpy(trimmed_str, s1 + start, end - start + 1);
	trimmed_str[end - start + 1] = '\0';

	return (trimmed_str);
}
*/

/*char *ft_strtrim(char const *s1, char const *set)
{
	
}*/