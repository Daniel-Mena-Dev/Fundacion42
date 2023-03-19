/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:13:24 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/24 19:23:23 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * La función ft_isascii y que comprueba si un valor es un carácter ASCII o no.
 * Devuelve 1 si el valor entrante pertenece a la tabla ascii (teniendo en 
 * cuenta los hexadecimales también, en el 'mismo rango') y si no retorna 0.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	int	r;

	r = 0;
	if ((c >= 0 && c <= 127) || (c >= 0x00 && c <= 0x7f))
		r = 1;
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	int	digit;

	digit = ft_isascii(0x7b);
	printf("%d", digit);
}
*/

/*
#include "libft.h"

// Recibe un parámetro entero "c" y devuelve otro entero.
int	ft_isascii(int c) 
{
	// Variable "r" que se usará para almacenar el resultado de la función.
	int	r; 

	//Inicializa la variable "r" con el valor 0, que significa falso.
	r = 0; 

//Comprueba si el valor de "c" está entre 0-127, o 0x00-0x7f,
//rangos de los caracteres ASCII en decimal y hexadecimal respectivamente.
	if ((c >= 0 && c <= 127) || (c >= 0x00 && c <= 0x7f)) 

	//Si 'r'=1, significa verdadero, la condición anterior se cumple.
		r = 1; 
// Devuelve el valor de "r", que será 1 si "c" es un carácter ASCII
 o 0 si no lo es.
	return (r); 
}
*/