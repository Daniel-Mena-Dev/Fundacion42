/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmena-ro <dmena-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:41:42 by dmena-ro          #+#    #+#             */
/*   Updated: 2022/12/14 21:22:54 by dmena-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
