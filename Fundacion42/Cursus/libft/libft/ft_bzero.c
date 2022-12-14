/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:13:35 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/14 19:20:10 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
