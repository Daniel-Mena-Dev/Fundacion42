/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:24:53 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/07 14:14:19 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Devuelve 1 si el valor entrante es un caracter imprimible de la tabla ascii
 *  y si no retorna 0.
*/
#include "libft.h"

int	ft_isprint(int c)
{
	int	r;

	r = 0;
	if (c > 31 && c < 127)
		r = 1;
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	int	pr;

	pr = ft_isprint(125);
	printf("%d", pr);
}
*/