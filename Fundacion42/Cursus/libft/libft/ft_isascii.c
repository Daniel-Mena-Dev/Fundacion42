/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:13:24 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/04 18:22:37 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	printf("%d", digit);
}
*/