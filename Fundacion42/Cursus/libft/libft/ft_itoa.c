/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:36:53 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/16 16:52:50 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Devuelve una string a partir del parámetro numérico recibido 'long n' y
 * reserva memoria para la misma.
*/
#include "libft.h"

size_t	ft_ndigits(long n);

char	*ft_itoa(int n)
{
	size_t	i;
	char	*nstr;
	long	ncpy;

	i = ft_ndigits(n);
	ncpy = n;
	nstr = (char *)malloc(sizeof(char) * (i + 1));
	if (!nstr)
		return (NULL);
	nstr[i--] = '\0';
	if (ncpy == 0)
		nstr[0] = '0';
	if (ncpy < 0)
	{
		nstr[0] = '-';
		ncpy *= -1;
	}
	while (ncpy > 0)
	{
		nstr[i] = (ncpy % 10) + 48;
		ncpy /= 10;
		i--;
	}
	return (nstr);
}

size_t	ft_ndigits(long n)
{
	size_t	digit;

	digit = 0;
	if (n == 0)
	{
		digit++;
		return (digit);
	}
	if (n < 0)
	{
		n *= -1;
		digit++;
	}
	while (n > 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}
/*
#include <stdio.h>

int	main(void)
{
	long	num = 719823;
	char	*st = ft_itoa(num);

	printf("%s\n", st);
	free(st);
	return (0);
}
*/