/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:36:53 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/15 19:30:19 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	char	*nstr;
	long	ncpy;

	i = ft_ndigits(n);
	ncpy = n;
	nstr = (char *)malloc(sizeof(char) * (i + 1));
	if (!n)
		return (NULL);
	s[i--] = '\0';
	if (ncpy == 0)
		nstr[0] = '0';
	else if (ncpy < 0)
	{
		nstr[0] = '-';
		ncpy *= -1;
	}
	while (ncpy > 0)
	{
		nstr[i] = (ncpy % 10) + 48;
/*
*--01--*sacamos el ultimo número del final(derecha),
haciendo el módulo de 10 del numero(que basicamente
me da como numero el resto de dividir ese numero entre 
10, que coincidice con el ultimo numero de la derecha) 
Y lo transformamos a caracter con ( '+ 48')
*/
		ncpy /= 10;
/*
*--02--* y necesito hacer eso para que en la próxima 
iteración cuando vaya a hacer el resto del númnero lo 
haga habiendo quitado el número que ya ha convertido a caracer
*/
		i--;
	}
	return (nstr);
}



size_t	ft_ndigits(int n)
{
	size_t	digit;

	digit = 0;
	if (n < 0)
	{
		n *= -1;
		digit++;
	}
	else if (n > 0)
	{
		n /= 10;
		digit++;
	}
	else
	{
		digit++;
		return (digit);
	}
	return (digit);
}
