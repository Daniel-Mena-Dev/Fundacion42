/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:13:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/15 19:02:03 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * El objetivo principal de la función es borrar una zona de memoria asignando
 * el valor cero a cada byte según el tamaño de 'n' como máximo. 
 * Esto puede ser útil para inicializar o limpiar una estructura de 
 * datos en memoria.
*/
#include "libft.h"

void	*ft_bzero(const char *st, size_t n)
{
	unsigned char	*stcpy;
	size_t			i;

	stcpy = (unsigned char *) st;
	i = 0;
	while (i < n)
	{
		stcpy[i] = '\0';
		i++;
	}
	return (stcpy);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[10];
	size_t	n;

	str = "Hola mundo";
	n = 4;
	printf("Antes: %s\n", str);
	ft_bzero(str, n);
	printf("Después: %s\n", str);

	return (0);
}
*/
