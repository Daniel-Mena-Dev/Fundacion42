/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:42:09 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/11 23:13:53 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *mv, size_t n)
{
	unsigned char	*destcpy;
	unsigned char	*mvcpy;
	size_t			i;

	destcpy = (unsigned char *)dest;
	mvcpy = (unsigned char *) mv;
	if (destcpy[0] == '\0' && mvcpy[0] == '\0')
		return (NULL);
	if (destcpy > mvcpy)
	{
		while (n-- > 0)
			destcpy[n] = mvcpy[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			destcpy[i] = mvcpy[i];
			i++;
		}	
	}
	return (destcpy);
}
