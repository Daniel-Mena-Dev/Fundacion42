/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:55:06 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/21 11:07:47 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * El objetivo principal de la función es convertir una cadena de caracteres
 * en un número entero teniendo en cuenta únicamente los carácteres 'numéricos' 
 * para mostrarlos y la cantidad de signos ("-") que posee para que el entero 
 * resultante esté en el signo adecudado.
*/
#include "libft.h"

size_t	ft_atoi(const char *st)
{
	size_t	i;
	size_t	n;
	size_t	neg;

	i = 0;
	n = 0;
	neg = 0;
	while ((st[i] >= '\t' && st[i] <= '\r') || st[i] == ' ')
		i++;
	if (st[i] == '+' || st[i] == '-')
	{
		if (st[i] == '-')
			neg++;
		i++;
	}
	while (st[i] >= '0' && st[i] <= '9')
	{
		n = (n * 10) + (st[i] - '0');
		i++;
	}
	if (neg % 2 == 1)
		n *= -1;
	return (n);
}
/*
#include <stdio.h>

int	main()
{
	size_t	r = 0;
	const char	*s = "  --+-+-+334322fd43";
	
	r = ft_atoi(s);

	printf("Resultado: %d\n",r);	
}
*/



/*
1. La función ft_atoi() recibe un parámetro st de tipo const char* y devuelve un valor de tipo size_t.
2. Declara tres variables i, n y neg de tipo size_t y les asigna los valores 0, 0 y 0 respectivamente.
3. Recorre la cadena st desde el principio hasta encontrar un carácter que no sea un espacio en blanco o un salto de línea, y actualiza el valor de i con cada iteración.
4. Comprueba si el carácter actual es un signo positivo o negativo, y si lo es, incrementa el valor de neg si es negativo y avanza al siguiente carácter.
5. Recorre la cadena st desde el carácter actual hasta encontrar un carácter que no sea un dígito numérico, y actualiza los valores de n e i con cada iteración. Para calcular n, multiplica el valor anterior por 10 y le suma el valor del dígito actual restándole el valor ASCII del carácter ‘0’.
6. Comprueba si el valor de neg es impar, y si lo es, multiplica n por -1 para cambiar su signo.
7. Devuelve el valor de n como resultado de la función.
*/

/*
#include "libft.h"

size_t	ft_atoi(const char *st)
{
	size_t	i; // índice para recorrer la cadena
	size_t	n; // número resultante
	size_t	neg; // contador de signos negativos

	i = 0;
	n = 0;
	neg = 0;

	// saltar los espacios en blanco al principio
	while ((st[i] >= '\t' && st[i] <= '\r') || st[i] == ' ') 
		i++;

	// si hay un signo positivo o negativo	
	if (st[i] == '+' || st[i] == '-') 
	{
		if (st[i] == '-') // si es negativo
			neg++; // incrementar el contador de signos negativos
		i++; // avanzar al siguiente carácter
	}

	// mientras haya dígitos numéricos
	while (st[i] >= '0' && st[i] <= '9') 
	{
		// multiplicar el número por 10 y sumarle el valor del dígito actual
		n = (n * 10) + (st[i] - '0'); 
		i++; // avanzar al siguiente carácter
	}
	if (neg % 2 == 1) // si hay un número impar de signos negativos
		n *= -1; // cambiar el signo del número resultante
	return (n); // devolver el número resultante
}
*/