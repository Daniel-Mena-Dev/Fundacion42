/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:55:06 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/15 18:45:08 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Devuelve un valor numérico a partir de la string recibida 'st', si existe
 * algún carácter dejará de copiar.
*/
#include "libft.h"

size_t	ft_atoi(const char *st)
{
	size_t	i;
	size_t	n;
	size_t	neg;

	i = 0;
	n = 0;
	neg = 0;
	while ((st[i] >= '\t' && st[i] <= '\r') || st[i] == ' ')
		i++;
	if (st[i] == '+' || st[i] == '-')
	{
		if (st[i] == '-')
			neg++;
		i++;
	}
	while (st[i] >= '0' && st[i] <= '9')
	{
		n = (n * 10) + (st[i] - '0');
		i++;
	}
	if (neg % 2 == 1)
		n *= -1;
	return (n);
}

/*
#include <stdio.h>

int	main()
{
	const char	*s = "  -334322fd43";

	int r = ft_atoi(s);

	printf("Resultado: %d\n",r);	
}
*/