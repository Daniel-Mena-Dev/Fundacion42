/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:46:42 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/19 19:04:38 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * El objetivo es comparar dos areas de memoria, "st1" y "st2", según el tamaño
 * 'n' bytes y devolver '0' que indica si son iguales o la diferencia entre ellas
 * en caso de ser distinta según la tabla ASCII, que será menor o mayor que 0.
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

int main()
{
    char str1[] = "Holam ";
    char str2[] = "Hola mundo";
    int result;

    result = ft_memcmp(str1, str2, 8);

    if (result == 0)
        printf("Son iguales, sin diferencia ASCII: %d\n", result);
    else if (result < 0)
        printf("La diferencia es menor: %d\n", result);
    else
        printf("La diferencia es mayor: %d\n", result);

    return 0;
}
*/