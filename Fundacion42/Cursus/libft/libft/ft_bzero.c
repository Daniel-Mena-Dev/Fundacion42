/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:13:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/21 11:53:30 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * El objetivo principal de la función es borrar una zona de memoria asignando
 * el valor cero a cada byte. 
 * Esto puede ser útil para inicializar o limpiar una estructura de datos en memoria.
*/
#include "libft.h"

void	*ft_bzero(const char *st, size_t n)
{
	unsigned char	*stcpy;
	size_t			i;

	stcpy = (unsigned char *) st;
	i = 0;
	while (i < n)
	{
		stcpy[i] = '\0';
		i++;
	}
	return (stcpy);
}

#include <stdio.h>

int main(void)
{
    // Declaramos una variable str que es un array de 10 chars
    char str[10] = "Hola mundo";
    // Imprimimos el contenido de str antes de llamar a la función
    printf("Antes: %s\n", str);
    // Llamamos a la función ft_bzero pasando el puntero a str y el número 5
    ft_bzero(str, 5);
    // Imprimimos el contenido de str después de llamar a la función
    printf("Después: %s\n", str);
    // Devolvemos 0 como resultado del programa
    return (0);
}

/*Ésta función recibe 1er parámetro 'const char *st' y cambiaremos cada
 * caracter por el carácter nulo y haremos ese cambio según el tamaño del
 * 2º parámetro size_t n'.*/
// Esta función borra los primeros n bytes de la memoria apuntada por st
void *ft_bzero(const char *st, size_t n)
{
    // Declaramos una variable stcpy que es un puntero a un char sin signo
    unsigned char *stcpy;
    // Declaramos una variable i que es un contador
    size_t i;
    // Convertimos el puntero st a un puntero a un char sin signo y lo asignamos a stcpy
    stcpy = (unsigned char *) st;
    // Inicializamos el contador i a cero
    i = 0;
    // Mientras el contador sea menor que n, hacemos lo siguiente:
    while (i < n)
    {
        // Asignamos el valor cero al byte apuntado por stcpy + i
        stcpy[i] = '\0';
        // Incrementamos el contador i en uno
        i++;
    }
    // Devolvemos el puntero stcpy como resultado de la función
    return (stcpy);
}
