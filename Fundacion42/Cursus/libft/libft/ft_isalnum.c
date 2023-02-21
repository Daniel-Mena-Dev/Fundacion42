/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:55:06 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/21 13:10:44 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Comprueba si el parámetro 'c' es Alfanumérico ó distinto.
 * Devuelve 1 si el valor entrante es una letra mayúscula o minúscula (A-Z ó
 * a-z) o un dígito (0-9) y si no retorna 0.
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	int	result;

	result = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ))
		result = 1;
	else if (c >= '0' && c <= '9')
		result = 1;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	alphan;

	alphan = ft_isalnum('.');
	printf("%d", alphan);
}
*/

/*
// Función ft_isalnum que recibe un entero c como parámetro
int ft_isalnum(int c)
{
    // Declara una variable result de tipo entero
    int result;

    // Inicializa result a 0
    result = 0;

    // Comprueba si c es una letra mayúscula o minúscula usando los rangos de los códigos ASCII
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ))
        // Si es así, asigna 1 a result
        result = 1;
    // Comprueba si c es un dígito usando el rango de los códigos ASCII
    else if (c >= '0' && c <= '9')
        // Si es así, asigna 1 a result también
        result = 1;
    
    // Devuelve el valor de result como resultado de la función
    return (result);
}
*/
