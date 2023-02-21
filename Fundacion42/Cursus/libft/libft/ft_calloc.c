/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:41:42 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/21 13:02:10 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 * Ésta función reserva memoria para un array de 'x' elementos(nitems) de 'y'
 * tamaño(size) cada 1 y lo inicializa a cero para que no exista "basura" en
 * la dirección de memoria a la que apunta como resultado.
*/
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*block;

	block = malloc(nitems * size);
	if (block == NULL)
		return (NULL);
	ft_bzero(block, (nitems * size));
	return (block);
}

#include <stdio.h>

int main(void)
{
    void *memory;
    int nitems;
    int size;

    /* 
		Prueba con nitems = 3 y size = sizeof(int). Con éste size el tamaño de cada byte
		estará acoplado al tamaño del compilador de cada 1, así se evitan errores
		y hace el código más portable y seguro
	*/
    nitems = 3;
    size = sizeof(int);
    memory = ft_calloc(nitems, size);
    if (memory == NULL)
        printf("Error: no se pudo reservar memoria\n");
    else
        printf("Se reservaron %d bytes en la dirección %p\n", nitems * size, memory);
    
    // Imprime el contenido del bloque de memoria RESERVADA
	printf("----- Memoria Reservada -----\n");
    for (int i = 0; i < nitems; i++)
        printf("%d ", ((char *)memory)[i]);
	// Liberamos la memoria
	free(memory);
	// Imprime el contenido del bloque de memoria LIBERADA
	printf("----- Memoria Liberada -----\n");
	for (int i = 0; i < nitems; i++)
        printf("%d ", ((char *)memory)[i]);
    
    return (0);
}

/*
// Esta función reserva memoria para un array de nitems elementos de tamaño size cada uno y los inicializa a cero
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
    // Declaramos una variable block que es un puntero a void
	void	*block;
    // Llamamos a la función malloc pasando el producto de nitems y size como argumento y asignamos el resultado a block
	block = malloc(nitems * size);
    // Si block es NULL, significa que no se pudo reservar memoria y devolvemos NULL como resultado de la función
	if (block == NULL)
		return (NULL);
    // Llamamos a la función ft_bzero pasando el puntero block y el producto de nitems y size como argumentos para borrar la memoria reservada
	ft_bzero(block, (nitems * size));
    // Devolvemos el puntero block como resultado de la función
	return (block);
}
*/