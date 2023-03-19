/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:42:09 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/19 19:03:13 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Busca la primera ocurrencia de un carácter(ch) en un bloque de memoria(st)
 * limitado por un tamaño 'size_t n' y devuelve un puntero a ella si la
 * encuentra, sino null.
*/
#include "libft.h"

void	*ft_memchr(const void *st, int ch, size_t n)
{
	char	*stcpy;
	size_t	i;

	stcpy = (char *)st;
	i = 0;
	while (i < n)
	{
		if (stcpy[i] == (char)ch)
		{
			return ((void *)(stcpy + i));
		}
		i++;
	}
	return (NULL);
}

/*
 La función memchr busca un carácter en un bloque de memoria y
devuelve un puntero al primer lugar donde lo encuentra. 
Por ejemplo, si tienes un bloque de memoria que contiene los
bytes 65, 66, 67, 68 y 69 (que corresponden a las letras A, B, C, D y E),
y buscas el carácter C con la función memchr, la función te devolverá 
un puntero al tercer byte del bloque de memoria. 
Si no encuentra el carácter que buscas en el número de bytes que 
le indicas como tercer argumento (n), la función te devolverá NULL.
*/
/*
#include <stdio.h>

int        main(void)
{

	char    st[] = "Herodes";
	int     ch = 'd';
	char	*r = ft_memchr(st, ch, 6);

//Dirección de memoria a la st[4] -> 'd' para verificar
	printf("Puntero a String original: %p\n",&st[4]);

    // Imprime el resultado de la función ft_memchr
	printf("Puntero a resultado función: %p\n", r);

	return (0);
}
*/

/*
#include "libft.h"

// Define la función ft_memchr que toma tres argumentos: un puntero 
a un bloque de memoria (st), un carácter a buscar (ch) y el número 
de bytes a examinar (n)
void	*ft_memchr(const void *st, int ch, size_t n)
{
	// Declara una variable stcpy de tipo char* y la inicializa 
	con el puntero st convertido a char*
	char	*stcpy;
	// Declara una variable i de tipo size_t y la inicializa con 0
	size_t	i;

	stcpy = (char *)st;
	i = 0;
	// Inicia un bucle while que se ejecuta mientras i sea menor que n
	while (i < n)
	{
		// Si el elemento i-ésimo del bloque de memoria apuntado por stcpy es 
		igual al carácter ch convertido a char
		if (stcpy[i] == (char)ch)
		{
			// Devuelve un puntero al elemento i-ésimo del bloque de memoria 
			apuntado por stcpy convertido a void*
			//return ((void *)(stcpy + i));  la dirección de memoria donde 
			se hace la coincidencia
			return ((void *)(stcpy + i));
		}
		// Incrementa i en 1
		i++;
	}
	// Si no se encuentra ninguna ocurrencia del carácter ch en el bloque
	 de memoria, 
	devuelve NULL
	return (NULL);
}
*/