/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:48:45 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/15 16:36:37 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * La función ft_strmapi aplica una función f a cada carácter de una cadena de caracteres s. La función devuelve una nueva cadena de caracteres que contiene los resultados de la aplicación de la función f a cada carácter de la cadena s.

La función primero verifica si tanto la cadena s como la función f son diferentes de NULL. Luego, la función reserva memoria para la nueva cadena de caracteres scpy con una longitud igual a la longitud de la cadena s más uno (para el carácter nulo final). Si no puede asignar la memoria, la función devuelve NULL.

A continuación, la función recorre la cadena s y aplica la función f a cada carácter. La función f toma como entrada el índice del carácter y el carácter en sí mismo. El resultado de la función f se almacena en la nueva cadena de caracteres scpy en la misma posición.

Finalmente, la función agrega un carácter nulo final a la nueva cadena de caracteres y la devuelve.

En resumen, la función ft_strmapi aplica una función f a cada carácter de una cadena de caracteres s y devuelve una nueva cadena de caracteres que contiene los resultados de la aplicación de la función f.
*/
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *scpy;

	if (!s && !f)
		return (NULL);
	scpy = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!scpy)
		return (NULL);
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

char ft_strtolower(unsigned int n, char c)
{
	if(c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	main(void)
{
	char *s = "PETETE MATAHOMBRES";
	char *snew;

	snew = ft_strmapi(s, &ft_strtolower);
	printf(%s\n, snew);
	return (0);
}
*/