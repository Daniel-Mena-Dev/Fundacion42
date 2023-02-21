/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:21:34 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/21 13:36:32 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Comprueba si el parámetro 'c' es un número ó distinto.
 * Devuelve 1 si el valor entrante es un número y si no retorna 0.
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	int	result;

	result = 0;
	if (c >= '0' && c <= '9')
		result = 1;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	digit;

	digit = ft_isdigit(52);
	printf("%d", digit);
}
*/

/*
// Función ft_isdigit que recibe un entero c como parámetro
int ft_isalpha(int c)
{
    // Declara una variable result de tipo entero
    unsigned int result;

    // Inicializa result a 0
    result = 0;

    // Comprueba si c es un dígito usando los rangos de los códigos ASCII
    if (c >= '0' && c <= '9')
        // Si es así, asigna 1 a result
        result = 1;
    // Devuelve el valor de result como resultado de la función
    return (result);
}
*/