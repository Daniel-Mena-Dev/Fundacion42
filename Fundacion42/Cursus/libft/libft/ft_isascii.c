/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:13:24 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/19 18:57:28 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * La función ft_isascii y que comprueba si un valor es un carácter ASCII o no.
 * Devuelve 1 si el valor entrante pertenece a la tabla ascii (teniendo en 
 * cuenta los hexadecimales también, en el 'mismo rango') y si no retorna 0.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	int	r;

	r = 0;
	if ((c >= 0 && c <= 127) || (c >= 0x00 && c <= 0x7f))
		r = 1;
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	int	digit;

	digit = ft_isascii(0x7b);
	printf("%d\n", digit);
}
*/
