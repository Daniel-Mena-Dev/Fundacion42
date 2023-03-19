/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:48:45 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/19 18:42:56 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Aplica una función f a cada carácter de una cadena de caracteres s.
 * La función devuelve una nueva cadena de caracteres que contiene los
 * resultados de la aplicación de la función f a cada carácter de la cadena s.
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*scpy;

	if (!s && !f)
		return (NULL);
	scpy = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!scpy)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		scpy[i] = f(i, s[i]);
		i++;
	}
	scpy[i] = '\0';
	return (scpy);
}

/*
#include <stdio.h>

// Definimos una función que será llamada por ft_strmapi
char print_char_index(unsigned int i, char c)
{
    printf("Carácter en la posición %d: %c\n", i, c);
    return (c);
}

int	main(void)
{
	char *s = "MELIODAS MATAHOMBRES";

	ft_strmapi(s, &print_char_index);
	return (0);
}
*/