/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:31:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/08 20:03:05 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *sr, size_t n)
{
	size_t	i;
	size_t	j;

	// Inicializamos la variable 'i' que se utilizará para recorrer el string 'dest'
	i = 0;
	
	// Caso en el que la cadena a buscar es una cadena vacía
	if (sr[0] == '\0')
		return ((char *)dest);

	// Caso en el que la cadena de destino es una cadena vacía
	else if (dest[0] == '\0')
		return (NULL);
	
	// Bucle que recorre la cadena 'dest'
	while (dest[i] != '\0')
	{
		// Inicializamos la variable 'j' que se utilizará para recorrer la cadena 'sr'
		j = 0;
		
		// Bucle que recorre la cadena 'sr' comparando con los caracteres de la cadena 'dest'
		while (dest[i + j] == sr[j] && (i + j) < n)
		{
			// Caso en el que se han comparado todos los caracteres y son iguales
			if (dest[i + j] == '\0' && sr[j] == '\0')
				return ((char *)&dest[i]);
			j++;
		}
		
		// Caso en el que se han comparado todos los caracteres de 'sr' y son iguales a los de 'dest'
		if (sr[j] == '\0')
			return ((char *)&dest[i]);
		
		// Incrementamos 'i' para seguir comparando con la siguiente posición de 'dest'
		i++;
	}
	
	// Devuelve 0 si no se ha encontrado la cadena 'sr' en 'dest'
	return (0);
}
*/