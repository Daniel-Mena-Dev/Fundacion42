/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:31:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2023/03/16 19:00:49 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Recorre una string hasta el carácter '\0' y devuelve la longitud del mismo. 
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
	printf("%d\n", pr);
}
*/