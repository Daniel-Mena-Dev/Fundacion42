/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:42:09 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/05 19:10:02 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int i, size_t n)
{
	size_t			count;
	unsigned char	*scopy;

	scopy = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		scopy[count] = (unsigned char)i;
		count++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	void	*cadena;
	const void	*copy_str;
	int		i;

	cadena = "Kakarotto";
	ft_memset(cadena, 70, 3);
	copy_str = (const void *)cadena;
	i = 0;
	while (copy_str)
	{
		write(1, &copy_str[i], 1);
		i++;
	}
	return (0);
}
*/