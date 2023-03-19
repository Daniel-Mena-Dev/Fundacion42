/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:13:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/19 19:09:34 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * La función copia la string 'st2' en otra 'st1', limitando la cantidad de
 * carácteres a 'n'.
*/
#include "libft.h"

size_t	ft_strlcpy(char *st1, const char *st2, size_t n)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (st2[j] != '\0')
	{
		j++;
	}
	if (!st1 || !st2)
		return (0);
	if (n == 0)
		return (j);
	while (st2[i] != '\0' && i < n - 1)
	{
		st1[i] = st2[i];
		i++;
	}
	st1[i] = '\0';
	return (j);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[] = "la";
	char str2[] = "thor";
	size_t	n = 3;
	
	size_t	result;

	printf("ANTES: %s \n", str);
    result = ft_strlcpy(str, str2, n);
    printf("RESULTADO: %lu \n", result);

	printf("DESPUES: %s \n", str);
	
}
*/