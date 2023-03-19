/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:31:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/02/07 14:31:04 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Recorre un string hasta el carácter '\0' y devuelve la longitud del mismo. 
*/
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	ln;

	ln = 0;
	while (s[ln] != '\0')
		ln++;
	return (ln);
}
/*
#include <stdio.h>

int	main(void)
{
	int	pr;

	pr = ft_strlen("125");
	printf("%d", pr);
}
*/