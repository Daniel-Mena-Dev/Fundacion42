/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:46:42 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/26 19:01:22 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
El objetivo principal de la función "ft_memcmp" es comparar dos cadenas de 
caracteres, "st1" y "st2", de longitud "n" de comparación máxima entre ellas 
y devolver '0' que indica si son iguales o cuál es la diferencia entre ellas
en caso de ser distinta según la tabla ASCII.
*/
#include "libft.h"

int	ft_memcmp(const char *st1, const char *st2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return ((unsigned char)st1[i] - (unsigned char)st2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include "libft.h"

int main()
{
    char str1[] = "Hola";
    char str2[] = "Hola mundo";
    int result;

    result = ft_memcmp(str1, str2, 4);

    if (result == 0)
        printf("Las dos cadenas son iguales.\n");
    else if (result < 0)
        printf("La primera cadena es menor que la segunda.\n");
    else
        printf("La primera cadena es mayor que la segunda.\n");

    return 0;
}
*/

/*
#include "libft.h"

int ft_memcmp(const char *st1, const char *st2, size_t n)
{
	// Declaración de una variable "i" de tipo "size_t" y se utiliza 
	para recorrer los bloques de memoria
    size_t i; 

// Inicialización de "i" a cero
    i = 0; 
// Mientras "i" sea menor que "n"
    while (i < n) 
    {
		// Si el carácter "i" de "st1" no es igual al carácter "i" de "st2"
        if (st1[i] != st2[i]) 
		// Devuelve la diferencia entre los dos caracteres como un 
		número entero **0-0**
            return ((unsigned char)st1[i] - (unsigned char)st2[i]); 
		// Incrementa el valor de "i" en uno
        i++; 
    }
	// Si los dos strings son iguales, devuelve cero para indicar que los
	 bloques de memoria son iguales.
    return (0); 
}

**0-0**
Cuando los caracteres en las posiciones correspondientes de st1 y 
st2 no son iguales, 
la función ftmemcmp devuelve la diferencia entre esos caracteres, 
que es el resultado
de restar el valor ASCII del carácter en st2 del valor ASCII del
 carácter en st1. 
Es importante tener en cuenta que se convierten los caracteres a 
'unsigned char' antes
de realizar la resta, para garantizar que se traten como valores 
numéricos 
en lugar de caracteres.

'unsigned char' es un tipo de datos numérico sin signo que se 
utiliza para representar 
valores enteros no negativos de 0 a 255. En la función ft_memcmp,
 se utiliza el tipo
'unsigned char' para convertir los caracteres de las cadenas st1 y 
st2 en valores numéricos 
antes de realizar la resta para obtener la diferencia entre ellos.

Es cierto que un 'char' es un tipo de datos que se utiliza para
 representar caracteres en C,
pero en este caso, los caracteres de st1 y st2 se convierten en 
'unsigned char' para que se 
traten como valores numéricos en lugar de caracteres. 
Esta conversión es necesaria para 
garantizar que la resta produzca el resultado correcto
 en caso de que los caracteres 
sean mayores que 127 (el rango de valores que se pueden 
representar con un char firmado).
**0-0**
*/