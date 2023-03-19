/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:24:53 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/24 19:25:13 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Devuelve 1 si el valor entrante es un caracter imprimible de la tabla ascii
 *  y si no retorna 0.
*/
#include "libft.h"

int	ft_isprint(int c)
{
	int	r;

	r = 0;
	if (c > 31 && c < 127)
		r = 1;
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	int	pr;

	pr = ft_isprint(125);
	printf("%d", pr);
}
*/
/*
1. La función ft_isprint() recibe un parámetro c de tipo int y devuelve un valor 
de tipo int.

2. Declara una variable r de tipo int y le asigna el valor 0.
3. Comprueba si el valor de c está entre 32 y 126, que son los valores ASCII de 
los caracteres imprimibles (incluyendo el espacio).

4. Si la condición se cumple, cambia el valor de r a 1, indicando que c es un 
carácter imprimible.

5. Si la condición no se cumple, mantiene el valor de r a 0, indicando que 
c no es un carácter imprimible.

6. Devuelve el valor de r como resultado de la función.
*/

/*#include "libft.h"

int	ft_isprint(int c)
{
	int	r;

	r = 0; // inicializar la variable r con el valor 0
	//si el valor de c está entre 32 y 126 (caracteres imprimibles)
	if (c > 31 && c < 127) 
		r = 1; // asignar el valor 1 a la variable r
	return (r); // devolver el valor de r
}*/