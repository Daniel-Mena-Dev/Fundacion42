/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:31:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/15 16:59:58 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * La función devuelve una string a partir de la primera aparición del 
 * carácter 'c' encontrado en el parametro 's' empezando desde el inicio.
 * Si no lo encuentra devuelve NULL.
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i != 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[] = "teste";
    char c = 'e';
    char *result;

    result = ft_strrchr(str, c);
    printf("%s \n", result);
}*/