/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:42:25 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/14 19:55:38 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * La función ft_striteri es parte de la librería libft y tiene como objetivo aplicar una función pasada como parámetro a cada carácter de una cadena de caracteres s, pasando también su índice en la cadena como parámetro a la función.

La función toma dos argumentos: la cadena de caracteres s y un puntero a una función f que toma dos argumentos, un entero sin signo unsigned int y un puntero a un carácter char *. Esta función se aplicará a cada carácter de la cadena s y su índice correspondiente en la cadena.

La función primero inicializa un contador i en 0 y luego verifica si tanto la cadena de caracteres s como la función f pasadas como argumentos no son nulas. Si ambas son no nulas, la función comienza a iterar a través de cada carácter de la cadena s, pasando el índice actual y una referencia al carácter actual a la función f.

En resumen, la función ft_striteri permite aplicar una función dada a cada carácter de una cadena junto con su índice en la cadena. Es útil para realizar operaciones en todos los caracteres de una cadena, como por ejemplo, cambiar su valor o imprimirlos con su índice correspondiente.


La función ft_striteri recorre una cadena de caracteres y aplica una función pasada como argumento a cada carácter de la cadena, junto con su índice correspondiente. La función se detiene cuando se encuentra el carácter nulo ('\0') que indica el final de la cadena. Esta función es útil para realizar operaciones en todos los caracteres de una cadena, como cambiar su valor o imprimirlos con su índice correspondiente.


*/
#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t i;

	i = 0;

	if (s != NULL && f != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}