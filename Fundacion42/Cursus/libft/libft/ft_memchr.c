/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:42:09 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/21 14:32:25 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La función ft_memchr es una función de cadena que busca la primera ocurrencia
de un carácter(ch) en un bloque de memoria(st) y devuelve un puntero a ella
si la encuentra.
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
int        main(void)
{
    // Declara un puntero st de tipo const char*
    const char    *st;
    // Declara una variables ch de tipo int
    int     ch;

    // Asigna un valor a st
    st = "Herodes";
	// Llena el bloque de memoria apuntado por st con los caracteres 'H', 'e', 'r', 'o', 'd', 'e', 's'
	char *stcpy = ft_strdup(st)
    // Asigna un valor a ch
    ch = 'd';
    // Imprime el resultado de la función ft_memchr
    printf("%p\n", ft_memchr(stcpy, ch, 6));
    // Libera la memoria apuntada por st
    free(stcpy);
    // Finaliza la función main
    return (0);
}
*/

/*
#include "libft.h"

// Define la función ft_memchr que toma tres argumentos: un puntero a un bloque de memoria (st), un carácter a buscar (ch) y el número de bytes a examinar (n)
void	*ft_memchr(const void *st, int ch, size_t n)
{
	// Declara una variable stcpy de tipo char* y la inicializa con el puntero st convertido a char*
	char	*stcpy;
	// Declara una variable i de tipo size_t y la inicializa con 0
	size_t	i;

	stcpy = (char *)st;
	i = 0;
	// Inicia un bucle while que se ejecuta mientras i sea menor que n
	while (i < n)
	{
		// Si el elemento i-ésimo del bloque de memoria apuntado por stcpy es igual al carácter ch convertido a char
		if (stcpy[i] == (char)ch)
		{
			// Devuelve un puntero al elemento i-ésimo del bloque de memoria apuntado por stcpy convertido a void*
			//return ((void *)(stcpy + i));  la dirección de memoria donde se hace la coincidencia
			return ((void *)(stcpy + i));
		}
		// Incrementa i en 1
		i++;
	}
	// Si no se encuentra ninguna ocurrencia del carácter ch en el bloque de memoria, devuelve NULL
	return (NULL);
}
*/