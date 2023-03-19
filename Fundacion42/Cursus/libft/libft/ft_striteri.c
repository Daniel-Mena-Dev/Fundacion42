/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:42:25 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/19 19:08:29 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Recorre una cadena de caracteres y aplica una función pasada como
 *  argumento a cada carácter de la cadena, junto con su índice
 * correspondiente. La función se detiene cuando se encuentra el carácter
 * nulo ('\0') que indica el final de la cadena.
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

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

/*
#include <stdio.h>

// Definimos una función que será llamada por ft_striteri
void print_char_index(unsigned int i, char *c)
{
    printf("Carácter en la posición %d: %c\n", i, *c);
}

int main()
{
    char *str = "Hola mundo!";

    // Llamamos a ft_striteri con la cadena y la función print_char_index
    ft_striteri(str, &print_char_index);
    
    return 0;
}
*/