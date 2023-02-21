/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:10:18 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/21 13:14:36 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Comprueba si el parámetro 'c' es una letra ó distinto.
 * Devuelve 1 si el valor entrante es una letra mayúscula o minúscula (A-Z ó
 * a-z) y si no retorna 0.
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned int	result;

	result = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		result = 1;
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int	alpha;

	alpha = ft_isalpha('f');
	printf("%d", alpha);
}
*/

/*
// Función ft_isalpha que recibe un entero c como parámetro
int ft_isalpha(int c)
{
    // Declara una variable result de tipo entero
    unsigned int result;

    // Inicializa result a 0
    result = 0;

    // Comprueba si c es una letra mayúscula o minúscula usando los rangos de los códigos ASCII
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ))
        // Si es así, asigna 1 a result
        result = 1;
    // Devuelve el valor de result como resultado de la función
    return (result);
}
*/