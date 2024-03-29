/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:21:34 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/19 18:57:36 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Comprueba si el parámetro 'c' es un número ó distinto.
 * Devuelve 1 si el valor entrante es un número y si no retorna 0.
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	int	result;

	result = 0;
	if (c >= '0' && c <= '9')
		result = 1;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	digit;

	digit = ft_isdigit(52);
	printf("%d\n", digit);
}
*/
