/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:24:53 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/05 20:10:14 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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