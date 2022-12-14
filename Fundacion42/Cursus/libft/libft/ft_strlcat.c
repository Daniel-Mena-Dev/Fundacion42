/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:13:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/14 19:19:41 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Esta función devuelve el tamaño de dest + cat. 'n' te limita el tamaño por el 
va a empezar a copiar cat en dest, es decir, si dest = 'hola' cat = 'kiu' y
n = '2' lo copiado sería hokiu y el return -> 5. 
Con dest = 'hola' cat = 'kiu' y n = '10' sería "holakiu\\nacin//\\nacin//'\0'"
y el return -> '11'.
*/
size_t	ft_strlcat(char *dest, char *cat, size_t n)
{
	size_t	ldes;
	size_t	i;
	size_t	j;

	ldes = ft_strlen(dest);
	i = 0;
	j = 0;
	if (ldes < (n - 1) && n > 0)
	{	
		while (dest[i] != '\0')
			i++;
		while (cat[j] != '\0' && i < n - 1)
		{
			dest[i] = cat[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	else if (ldes >= n)
		ldes = n;
	return (ldes + ft_strlen(cat));
}
