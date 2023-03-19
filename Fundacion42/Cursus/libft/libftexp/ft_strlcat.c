/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:13:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/14 20:02:51 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * La función ft_strlcat concatena dos cadenas de caracteres dest y cat con un tamaño máximo de n caracteres en la cadena de destino dest. La función devuelve el tamaño total de la cadena resultante.

La función primero obtiene la longitud de la cadena de destino dest usando la función ft_strlen. Luego, la función verifica si la longitud de la cadena de destino es menor que el tamaño máximo menos uno n - 1 y si el tamaño máximo es mayor que cero. Si es así, la función comienza a copiar los caracteres de la cadena a concatenar cat al final de la cadena de destino dest, siempre que aún no se haya alcanzado el tamaño máximo.

Si la longitud de la cadena de destino es mayor o igual que el tamaño máximo, la función simplemente devuelve el tamaño máximo. Si la concatenación se realiza con éxito, la función agrega un carácter nulo final a la cadena de destino.

La función devuelve el tamaño total de la cadena resultante, que es la suma de la longitud de la cadena de destino original y la longitud de la cadena concatenada.
*/
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