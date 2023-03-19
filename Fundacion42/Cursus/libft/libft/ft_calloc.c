/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:41:42 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/19 18:55:51 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ésta función reserva memoria para un array de 'x' elementos(nitems) de 'y'
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
/*
#include <stdio.h>

int main(void)
{
    // Reservar memoria para un array de 10 enteros usando ft_calloc
	int	*array = ft_calloc(10, sizeof(int));

	int i = 0;
	// Imprimir los valores del array (deberían ser todos ceros)
	while (i < 10) // Condición para repetir el bloque mientras i sea menor que 10
	{
		printf("*-*: %d \n", array[i]); // Imprimir valor en posición i
        i++;
	}
	printf("\n");
	// Liberar la memoria reservada
	free(array);
	return (0);
}
*/