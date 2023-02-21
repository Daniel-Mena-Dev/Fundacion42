/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:46:42 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/21 15:28:29 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * En ésta función recibimos 2 parámetros que cambiaremos a 'unsigned char'
 * copia cada carácter de '*cpy' en '*dest' hasta el tamaño de 'n'
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *cpy, size_t n)
{
	unsigned char	*destcpy;
	unsigned char	*cpy_cpy;
	size_t			i;

	destcpy = (unsigned char *)dest;
	cpy_cpy = (unsigned char *)cpy;
	i = 0;
	if (!destcpy && !cpy_cpy)
		return (0);
	while (i < n)
	{
		destcpy[i] = cpy_cpy[i];
		i++;
	}
	return (destcpy);
}

/*
 La función ft_memcpy se utiliza para copiar n bytes de memoria desde la 
 dirección de memoria 'cpy' a la dirección de memoria 'dest'. 
 La función devuelve un puntero a 'dest'.
*/

int main(void)
{
    char src[] = "Hello, world!";
    char dest[] = "bye, Dimitri";

	// Imprime el dest sin modificar.
    printf("----- 'dest' sin modificar -----: %s\n", dest);

    ft_memcpy(dest, src, 6);

    // Imprime el resultado.
    printf("El resultado de la copia es: %s\n", dest);

    return (0);
}


void *ft_memcpy(void *dest, const void *cpy, size_t n)
{
    // Se definen dos punteros a unsigned char para realizar la copia.
    unsigned char *destcpy;
    unsigned char *cpycpy;
    // Se inicializa el contador i.
    size_t i = 0;

    // Se convierten los punteros dest y cpy a punteros a unsigned char.
    destcpy = (unsigned char *)dest;
    cpycpy = (unsigned char *)cpy;

    // Si tanto dest como cpy son NULL, se devuelve NULL.
    if (!destcpy && !cpycpy)
        return (NULL);

    // Se copian n bytes de memoria desde cpy a dest.
    while (i < n)
    {
        destcpy[i] = cpycpy[i];
        i++;
    }

    // Se devuelve un puntero a dest.
    return (destcpy);
}
