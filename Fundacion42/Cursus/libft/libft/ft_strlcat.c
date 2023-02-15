/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:13:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/13 19:49:36 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	ln;

	ln = 0;
	while (s[ln] != '\0')
		ln++;
	return (ln);
}
/*
Esta función devuelve el tamaño de dest + cat. 'n' te limita el tamaño por el que
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
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int		main(void)
{
	char	dest[20] = "Hola";
	char	cat[20] = "j mundo";
	size_t	n = 20;
	size_t	result;

	// Imprimir el valor de dest antes de concatenar
	printf("Valor de dest antes de concatenar: %s\n", dest);

	// Concatenar cat en dest y guardar el resultado en la variable result
	result = ft_strlcat(dest, cat, n);

	// Imprimir el valor de dest después de concatenar
	printf("Valor de dest después de concatenar: %s\n", dest);

	// Imprimir el resultado de la concatenación
	printf("Resultado de la concatenación: %lu\n", result);

	return (0);
}
*/