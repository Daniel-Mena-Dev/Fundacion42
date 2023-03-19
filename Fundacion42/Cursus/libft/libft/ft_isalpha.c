/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:10:18 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/19 18:57:18 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Comprueba si el parámetro 'c' es una letra ó distinto.
 * Devuelve 1 si el valor entrante es una letra mayúscula o minúscula (A-Z ó
 * a-z) y si no retorna 0.
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned int	result;

	result = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		result = 1;
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int	alpha;

	alpha = ft_isalpha('f');
	printf("%d\n", alpha);
}
*/
