/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:55:06 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/07 14:10:48 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Devuelve 1 si el valor entrante es una letra o un número y si no retorna 0.
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	int	result;

	result = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ))
		result = 1;
	else if (c >= '0' && c <= '9')
		result = 1;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	alphan;

	alphan = ft_isalnum('.');
	printf("%d", alphan);
}
*/
