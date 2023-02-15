/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:10:18 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/07 14:10:42 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Devuelve 1 si el valor entrante es una letra y si no retorna 0.
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
	printf("%d", alpha);
}
*/
